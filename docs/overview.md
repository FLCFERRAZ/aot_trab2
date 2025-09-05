# Project Overview
This project implements a 4-bit binary adder using an Arduino microcontroller. The system reads two 4-bit binary numbers from input pins, performs binary addition, and displays the result (4-bit sum and carry bit) on output pins. This project demonstrates fundamental digital logic concepts and Arduino programming skills.
# Project Structure
4-bit-binary-adder/
>├── src/
>
│>>└── 4_bit_adder.ino    # Main Arduino sketch
>
>├── docs/
>
│>>└── circuit_diagram.png # Wiring diagram (to be added)
>
>├── README.md              # Project documentation
>
>└── LICENSE                # Project license
# Components Used
* Arduino Uno or compatible board
* 8x toggle switches or digital input sources (for the two 4-bit numbers)
* 5x LEDs (for the 4-bit result display)
* 1x LED (for the carry bit indicator)
* Breadboard and connecting wires
* Resistors (220-330Ω for LEDs)
# Circuit Connection Details
## Input Pins (4-bit numbers):
* First Number (A):
  1. Bit 0 (LSB): Arduino Pin 0
  2. Bit 1: Arduino Pin 1
  3. Bit 2: Arduino Pin 2
  4. Bit 3 (MSB): Arduino Pin 3
* Second Number (B):
  1. Bit 0 (LSB): Arduino Pin 4
  2. Bit 1: Arduino Pin 5
  3. Bit 2: Arduino Pin 6
  4. Bit 3 (MSB): Arduino Pin 7
## Output Pins (Result):
* Sum Output:
  1. Bit 0 (LSB): Arduino Pin 8
  2. Bit 1: Arduino Pin 9
  3. Bit 2: Arduino Pin 10
  4. Bit 3 (MSB): Arduino Pin 11
* Carry Bit: Arduino Pin 12

