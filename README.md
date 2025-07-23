# Smart Energy Meter with Load Monitoring and Overload Protection

## 🔌 Project Overview
This project is a Smart Energy Meter system designed using Arduino Uno and ACS712 current sensor to monitor real-time power consumption. It helps in automatic load disconnection in case of overload, enhancing electrical safety and energy management.

## ⚙️ Components Used
- Arduino Uno
- ACS712 Current Sensor
- 16x2 LCD Display
- Relay Module
- Buzzer
- Breadboard & Jumper Wires
- Power Supply

## 🎯 Objectives
- Monitor electrical energy consumption in real-time
- Display power usage on an LCD
- Trigger buzzer and cut off load via relay if overload is detected

## 🧠 Working Principle
1. The current sensor (ACS712) reads the current flowing through the load.
2. Arduino calculates the power (P = V × I), assuming voltage is constant (230V).
3. If power exceeds a threshold (e.g., 100W), the relay cuts the load and a buzzer alerts.
4. LCD displays current power usage and warning messages.

## 💾 Arduino Code
See `Smart_Energy_Meter.ino` in this repository.

## 🖼️ Circuit Diagram
*(Insert circuit diagram image here if available)*

## 📄 Report
Full project explanation is available in the file `Smart_Energy_Meter_Project_Report.pdf`.

## 🧑‍🎓 Domain
Electrical Engineering

---

### 📌 Developed for Live Project Assignment Submission
This project demonstrates practical application of electrical load management using microcontrollers. Suitable for academic purposes and beginner-level IoT projects.

