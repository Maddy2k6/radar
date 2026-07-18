#include <Servo.h>

Servo radarServo;

#define TRIG_PIN   10
#define ECHO_PIN   11
#define SERVO_PIN  12

const int MIN_ANGLE = 15;
const int MAX_ANGLE = 165;
const int DETECT_DISTANCE = 80;

int currentAngle = 15;
int scanDir = 1;
bool manualMode = false;

int calculateDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH, 8000);
  if (duration == 0) return 400;
  int d = duration * 0.0343 / 2;
  return min(d, 400);
}

void checkSerial() {
  if (Serial.available() > 0) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    if (cmd.startsWith("M")) {
      manualMode = true;
      int target = constrain(cmd.substring(1).toInt(), MIN_ANGLE, MAX_ANGLE);
      radarServo.write(target);
      currentAngle = target;
    } else if (cmd == "A") {
      manualMode = false;
    }
  }
}

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  radarServo.attach(SERVO_PIN);
  Serial.begin(9600);
  radarServo.write(MIN_ANGLE);
  delay(300);
}

void loop() {
  checkSerial();

  if (manualMode) {
    // Servo stays put — just keep measuring distance at current angle
    int d = calculateDistance();
    Serial.print(currentAngle);
    Serial.print(",");
    Serial.print(d);
    Serial.print(".");
    delay(80); // ~12 readings/sec, no servo movement
    return;    // <-- this is the key line: skip auto scan entirely
  }

  // Auto scan
  radarServo.write(currentAngle);
  int d = calculateDistance();
  Serial.print(currentAngle);
  Serial.print(",");
  Serial.print(d);
  Serial.print(".");

  if (d > 180)                   delay(1);
  else if (d > 100)              delay(3);
  else if (d > DETECT_DISTANCE)  delay(5);
  else                           delay(15);

  currentAngle += scanDir;
  if (currentAngle >= MAX_ANGLE) { currentAngle = MAX_ANGLE; scanDir = -1; }
  if (currentAngle <= MIN_ANGLE) { currentAngle = MIN_ANGLE; scanDir =  1; }
}