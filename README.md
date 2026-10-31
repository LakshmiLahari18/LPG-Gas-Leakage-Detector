
# LPG Gas Leakage Detector

## Project Overview
An LPG gas leakage detection prototype using Arduino UNO and MQ-2 gas sensor.

## Objective
To detect elevated gas levels and alert users through a buzzer.

## Hardware Components
- Arduino UNO
- MQ-2 Gas Sensor
- Buzzer
- Breadboard
- Jumper Wires
- USB Cable
- ## Block Diagram

![LPG Gas Leakage Detector Block Diagram]
(LPG_Gas_Leakage_Block_Diagram.png)

## Working Principle
1. MQ-2 sensor monitors the surrounding air.
2. The sensor sends an analog signal to Arduino UNO.
3. Arduino reads the sensor value.
4. If the value crosses the predefined threshold, the buzzer turns ON.
5. Otherwise, the buzzer remains OFF.

## Pin Connections
| Component | Arduino Pin |
|---|---|
| MQ-2 AO | A0 |
| Buzzer | D8 |

## Programming Language
Arduino C/C++

## Applications
- Gas monitoring demonstrations
- Educational safety projects
- Embedded systems learning

## Safety Disclaimer
This is an educational prototype and is not a certified gas safety device. Do not use it as a replacement for certified LPG detectors.
