# Binary LED Counter (1–31)

## Overview
This project implements a binary counter using 5 LEDs to represent values from 1 to 31.  
It demonstrates how numerical values can be translated into binary signals and displayed using digital outputs.

## Features
- Binary counting using 5 LEDs
- Representation of values from 1 to 31
- Use of bitwise operations for efficient control
- Continuous real-time update of LED states

## Hardware Components
- Arduino board
- 5 LEDs
- Resistors
- Breadboard and jumper wires

## How it Works
A counter variable is incremented continuously inside the main loop.  
Each bit of the counter is extracted using bitwise operations and mapped to a corresponding LED.

- LED 1 → Least Significant Bit (LSB)
- LED 5 → Most Significant Bit (MSB)

This allows visualization of binary numbers directly through LED states.

## Code Structure
The code is organized into simple logical steps:
- Counter update logic
- Bitwise mapping of values to outputs
- LED state update

## What I Learned
- How to use bitwise operations to control multiple outputs efficiently  
- Representation of numerical values in binary form  
- Basic structure of embedded programs using Arduino  

## Future Improvements
- Add button control for manual increment
- Add reset functionality
- Integrate display module (LCD/OLED)

## Author
Crista Lucia Nchama
