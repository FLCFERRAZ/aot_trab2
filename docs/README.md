# Readme
>Header
>
>Project Name: 4-Bit Binary Adder
>
>Version: 1.0
>
>Author: Fernando Luis da Costa Ferraz
>
>Last Updated: 2025-09-05
>
>Programming Language: C++

>Project Overview
>>
>This project implements a 4-bit binary adder using an Arduino microcontroller. The system reads two 4-bit binary numbers from input pins, performs binary addition, and displays the result (4-bit sum and carry bit) on output pins. This project demonstrates fundamental digital logic concepts and Arduino programming skills.
>>>
>Project Structure
>
>4-bit-binary-adder/
>
>├── src
>
>│   └── 4_bit_adder.ino    # Main Arduino sketch
>
>├── docs/
>
>│   └── circuit_diagram.png # Wiring diagram (to be added)
>
>├── README.md              # Project documentation
>
>└── LICENSE                # Project license
>
>Components Used
>
>Arduino Uno or compatible board
>8x toggle switches or digital input sources (for the two 4-bit numbers)
>5x LEDs (for the 4-bit result display)
>1x LED (for the carry bit indicator)
>Breadboard and connecting wires
>Resistors (220-330Ω for LEDs)
>Circuit Connection Details
>Input Pins (4-bit numbers):
>
>First Number (A):
>  *Bit 0 (LSB): Arduino Pin 0
>  *Bit 1: Arduino Pin 1
>  *Bit 2: Arduino Pin 2
>  *Bit 3 (MSB): Arduino Pin 3
>
>Second Number (B):
>  *Bit 0 (LSB): Arduino Pin 4
>  *Bit 1: Arduino Pin 5
>  *Bit 2: Arduino Pin 6
>  *Bit 3 (MSB): Arduino Pin 7
>Output Pins (Result):
>
>Sum Output:
>  *Bit 0 (LSB): Arduino Pin 8
>  *Bit 1: Arduino Pin 9
>  *Bit 2: Arduino Pin 10
>  *Bit 3 (MSB): Arduino Pin 11
>
>Carry Bit: Arduino Pin 12
>
>How It Works
>
>Binary Addition Logic
>
>The project implements a 4-bit binary adder using a series of full adders:
> *Each full adder takes three inputs (two bits from input numbers and a carry-in)
> *Produces two outputs (sum bit and carry-out)
> *The carry-out from each stage becomes the carry-in for the next higher bit
>
>Code Implementation
>
>The Arduino sketch includes:
>
> 1.Setup Function: Configures input and output pins
> 2.Loop Function: Continuously reads inputs, performs addition, and updates outputs
> 3.Helper Functions:
>  *sumBit(): Calculates the sum bit using XOR logic
>  *sumCarryBit(): Calculates the carry bit using AND-OR logic
>
>Operational Flow
>
> 1.Read two 4-bit numbers from input pins
> 2.Initialize carry bit to 0
> 3.Process each bit from least significant to most significant:
>  *Calculate sum bit for current position
>  *Calculate carry bit for next position
>4.Display the 4-bit result and final carry bit on output pins
>
>Getting Started
>
>Prerequisites
>
> *Arduino IDE installed on your computer
> *Basic understanding of binary arithmetic and digital logic
> *Familiarity with Arduino programming
>
>Installation
>
> 1.Clone or download this repository
> 2.Open the 4_bit_adder.ino file in Arduino IDE
> 3.Connect your Arduino board to the computer
> 4.Wire the circuit according to the connection details
> 5.Upload the sketch to your Arduino
>
>Usage
>
> 1.Set the input pins (0-7) to HIGH (5V) or LOW (0V) to represent binary 1 or 0
> 2.The output pins (8-12) will light up LEDs to show the binary result
> 3.Pin 12 indicates the carry bit (overflow)
>
>Applications
>
> *Educational tool for learning binary arithmetic
> *Foundation for more complex arithmetic logic units (ALUs)
> *Demonstrates fundamental digital logic concepts
> *Can be expanded to handle subtraction and other operations
>
>Future Enhancements
>
> *Add support for binary subtraction
> *Implement overflow detection
> *Add seven-segment display output for decimal representation
> *Create a library for reusable binary operations
>
>License
>This project is open source and available under the MIT License.

![IMAGEM NÃO ENCONTRADA](https://github.com/FLCFERRAZ/aot_trab2/blob/fernando_ferraz/docs/images/arduino2.png "Arduino - Imagem2")
