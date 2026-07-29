# Arduino Sensor-Actuator Projects

A collection of 10 Arduino mini-projects, each pairing one **sensor** with one **actuator**. Every project includes the `.ino` source code, a circuit diagram (TinkerCad), and a short README explaining the logic.

## Projects

| # | Project | Sensor | Actuator | Folder |
|---|---------|--------|----------|--------|
| 01 | Light-Activated LED | LDR | LED | [`01-LDR-LED`](01-LDR-LED) |
| 02 | Motion-Activated Alarm | PIR Motion Sensor | Buzzer | [`02-PIR-Buzzer`](02-PIR-Buzzer) |
| 03 | Temperature-Activated LED | Analog Temp Sensor | LED | [`03-Temp-LED`](03-Temp-LED) |
| 04 | Automatic Door | HC-SR04 Ultrasonic | Servo Motor | [`04-Ultrasonic-Servo`](04-Ultrasonic-Servo) |
| 05 | Manual LED Toggle | Push Button | LED | [`05-PushButton-LED`](05-PushButton-LED) |
| 06 | Manual Angle Control | Potentiometer | Servo Motor | [`06-Potentiometer-Servo`](06-Potentiometer-Servo) |
| 07 | Pressure-Activated LED | FSR (Force Sensor) | LED | [`07-FSR-LED`](07-FSR-LED) |
| 08 | Proximity Alert | HC-SR04 Ultrasonic | Buzzer | [`08-Ultrasonic-Buzzer`](08-Ultrasonic-Buzzer) |
| 09 | Brightness Dimmer | Potentiometer | RGB LED | [`09-Potentiometer-RGBLED`](09-Potentiometer-RGBLED) |
| 10 | Darkness Alarm | LDR | Buzzer | [`10-LDR-Buzzer`](10-LDR-Buzzer) |

## Structure

Each project folder follows the same pattern:

```
NN-SensorName-ActuatorName/
├── sketch_name.ino     # Arduino source code
├── circuit.png          # TinkerCad circuit diagram
└── README.md             # What it does + how it works
```

## Tools Used
- Arduino IDE / Arduino language (C/C++)
- TinkerCad Circuits (simulation & diagrams)