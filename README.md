
# Binary LED Counter (1–31)

## Overview
This project implements a binary counter using 5 LEDs to represent values from 1 to 31.

Each LED corresponds to one bit, allowing visualization of binary numbers in real time.

## Features
- Binary counting using 5 LEDs
- Representation of numbers from 1 to 31
- Use of bitwise operations for efficient control

## Hardware Components
- Arduino board
- 5 LEDs
- Resistors
- Breadboard and wires

## How it Works
The system increments a counter and displays its value in binary format using LEDs.

Each LED represents a bit:
- LED 1 → Least Significant Bit (LSB)
- LED 5 → Most Significant Bit (MSB)

Bitwise operations are used to extract each bit and map it to the corresponding LED.

## Code Structure
- Counter variable increments over time
- Bitwise shifting is used to control each LED
- Loop updates LED states continuously

## Future Improvements
- Add button control for manual increment
- Add reset functionality
- Integrate display module (LCD/OLED)

## Author
Crista Lucia Nchama
