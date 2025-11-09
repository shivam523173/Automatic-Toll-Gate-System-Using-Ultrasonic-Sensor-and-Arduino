# Automatic Toll Gate System Using Ultrasonic Sensor and Arduino

This project demonstrates an automatic toll gate mechanism using an ultrasonic sensor and a servo motor. When a vehicle comes within a set distance, the ultrasonic sensor detects it and triggers the servo motor to lift the gate. After the vehicle passes, the gate automatically closes.

---

## ⚙️ Components Required
| Component | Quantity |
|----------|----------|
| Arduino Uno / Nano / Mega | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90/MG90S Servo Motor | 1 |
| Jumper Wires | As needed |
| Breadboard | 1 |
| 5V Power Supply (USB) | 1 |

---

## 🔌 Circuit Connections

| Device Pin | Arduino Pin |
|------------|-------------|
| Trig (HC-SR04) | D6 |
| Echo (HC-SR04) | D7 |
| Servo Signal | D9 |
| VCC | 5V |
| GND | GND |

---

## 💻 Working Principle
1. The ultrasonic sensor measures the distance to detect a vehicle.
2. If the vehicle is within 30 cm, the servo rotates from 0° to 90° to open the gate.
3. After a short delay, the servo returns to 0° to close the gate.
4. System resets and waits for the next vehicle.

---

## 🚀 Applications
- Smart Toll Booths
- Parking Systems
- Automated Barrier Systems
- Traffic Control Projects

---

## 📜 License
Free to use for education and hobby projects.
