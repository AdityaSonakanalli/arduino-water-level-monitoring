# Arduino Water Level Monitoring System

## Project Description

This project implements a basic water level monitoring system using an
Arduino Uno and a water level sensor.

The Arduino reads the water level sensor and provides visual indication
using three LEDs.

## Water Level Indication

- Green LED – Low water level
- Yellow LED – Medium water level
- Red LED – High water level

## Components Required

- Arduino Uno
- Water Level Sensor
- Green LED
- Yellow LED
- Red LED
- 220 Ohm Resistors
- Breadboard
- Jumper Wires
- USB Cable

## Working Principle

The water level sensor is connected to analog pin A0 of the Arduino.
The Arduino reads the sensor value using analogRead().

Based on the sensor value, the Arduino activates one of three LEDs:

- Below 300: Green LED
- 300 to 699: Yellow LED
- 700 and above: Red LED

The sensor reading is also displayed on the Serial Monitor.

## Software

Arduino IDE

## QA Documentation

GitHub Issues are used to identify, document, track and resolve
quality-related problems in the project.

## Project Tracking

The project is planned and tracked using GitHub Issues and GitHub
Projects.
