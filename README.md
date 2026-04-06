# binary-counter-embedded
# Embedded Binary Counter with Button Control

## Overview
This project implements a binary counter (1–31) using LEDs to display values.  
A push button is used to control the counter, with software debouncing to ensure stable input.

## Features
- Binary counting using LEDs
- Button-controlled input
- Software debouncing for reliable signal reading
- Bitwise operations for efficient data handling

## Hardware Components
- Arduino board
- LEDs (5)
- Resistors
- Push button
- Breadboard and wires

## How it Works
The system increments a counter and displays its value in binary using LEDs.  
Each LED represents one bit.  

A push button is used as input:
- Short press → increment counter
- (Optional future improvement: long press → reset)

To avoid false triggering due to mechanical bouncing, a software debouncing method is implemented.

## Code Structure
- Main loop handles button reading and counter update
- Debounce logic ensures stable input detection
- Bitwise operations are used to map counter values to LEDs

## Future Improvements
- Add reset functionality (long press)
- Add display (LCD/OLED)
- Convert to interrupt-based input handling

## Author
Crista Lucia Nchama
