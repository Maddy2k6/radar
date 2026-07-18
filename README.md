<div align="center">

# 🕷️ RADAR CHAN
### Futuristic Arduino Radar Visualization

A cyberpunk-inspired real-time radar system built using **Arduino Uno**, **HC-SR04 Ultrasonic Sensor**, **Servo Motor**, and a modern **HTML/CSS/JavaScript** dashboard powered by the **Web Serial API**.

![Radar Chan Demo](assets/radar-demo.png)

![HTML](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![CSS](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)

---

*"Every echo tells a story."*

</div>

---

# 📖 Overview

RADAR CHAN transforms a simple Arduino ultrasonic radar into an interactive futuristic visualization inspired by advanced HUD interfaces.

The system continuously scans the surroundings using a servo-mounted HC-SR04 ultrasonic sensor and displays detected objects in real time through a responsive browser dashboard.

---

# ✨ Features

- 🎯 Real-time object detection
- 📡 180° radar scanning
- ⚡ Web Serial communication
- 🌐 Browser-based interface
- 🎨 Futuristic cyberpunk UI
- 📊 Live distance measurements
- 🔄 Automatic scanning mode
- 🎮 Manual angle control
- 📈 Signal strength indicator
- 💻 No software installation required

---

# 🛠 Hardware Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| Jumper Wires | Multiple |
| USB Cable | 1 |
| Breadboard | 1 |

---

# 💻 Technologies

- HTML5
- CSS3
- JavaScript
- Arduino C++
- Web Serial API
- Canvas API

---

# 📷 Project Preview

## Dashboard

![Dashboard](assets/radar-demo.png)

---

# ⚙️ Working Principle

1. Servo rotates from **15° to 165°**
2. HC-SR04 measures obstacle distance.
3. Arduino sends:
```

angle,distance

```
4. Browser receives data using Web Serial API.
5. Radar updates in real time.

---

# 📂 Project Structure

```

Radar-Chan/
│
├── index.html
├── style.css
├── script.js
├── arduino/
│   └── radar.ino
│
├── assets/
│   ├── radar-demo.png
│   └── screenshot.png
│
└── README.md

```

---

# 🚀 Getting Started

## Clone Repository

```bash
git clone https://github.com/Maddy2k6/YOUR_REPOSITORY.git
```

## Open

Simply open

```

index.html

```

in Google Chrome or Microsoft Edge.

---

# 🔌 Connect Arduino

1. Upload the Arduino sketch.
2. Connect Arduino using USB.
3. Open the webpage.
4. Click **Connect**.
5. Select the correct COM port.
6. Enjoy real-time radar scanning.

---

# 📡 Serial Format

```

ANGLE,DISTANCE

```

Example

```

125,37

```

---

# 🎯 Future Improvements

- ESP32 Wi-Fi Support
- Multiple target tracking
- AI object classification
- Radar recording
- Mobile responsive layout
- 3D visualization
- Voice notifications

---

# 🤝 Contributions

Contributions, feature requests, and suggestions are welcome.

Feel free to fork this repository and submit a pull request.

---

# 👨‍💻 Author

**Madhav M N**

- GitHub: https://github.com/Maddy2k6
- LinkedIn: https://linkedin.com/in/madhav-m-n-3b4308380

---

<div align="center">

### ⭐ If you enjoyed this project, consider giving it a Star!

Made with ❤️ using Arduino + JavaScript

</div>
