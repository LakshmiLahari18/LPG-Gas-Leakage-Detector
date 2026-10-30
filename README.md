
LPG Gas Leakage Detector

Project Overview

An Arduino-based LPG gas leakage detection system using an MQ-2 gas sensor.

Objective

To detect elevated gas levels and alert users through a buzzer and LED.

Hardware Components

- Arduino UNO
- MQ-2 Gas Sensor
- Buzzer
- LED
- 220 Ohm Resistor
- Breadboard
- Jumper Wires

Working Principle

1. MQ-2 sensor monitors the surrounding air.
2. Sensor sends an analog signal to Arduino UNO.
3. Arduino compares the reading with a predefined threshold.
4. If the reading exceeds the threshold, the buzzer and LED turn ON.
5. Otherwise, they remain OFF.

Pin Connections

Component| Arduino Pin
MQ-2 AO| A0
Buzzer| D8
LED| D7

Programming Language

Arduino C/C++

Applications

- Kitchen safety demonstrations
- Gas monitoring prototypes
- Educational IoT projects

Safety Disclaimer

This is an educational prototype, not a certified gas safety device. It must not replace certified LPG detectors or safety systems.
