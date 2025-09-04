# Usage
# How It Works
## Binary Addition Logic
The project implements a 4-bit binary adder using a series of full adders:
* Each full adder takes three inputs (two bits from input numbers and a carry-in)
* Produces two outputs (sum bit and carry-out)
* The carry-out from each stage becomes the carry-in for the next higher bit
## Code Implementation
## The Arduino sketch includes:
1. Setup Function: Configures input and output pins
2. Loop Function: Continuously reads inputs, performs addition, and updates outputs
3. Helper Functions:
* sumBit(): Calculates the sum bit using XOR logic
* sumCarryBit(): Calculates the carry bit using AND-OR logic
## Operational Flow
1. Read two 4-bit numbers from input pins
2. Initialize carry bit to 0
3. Process each bit from least significant to most significant:
  * Calculate sum bit for current position
  * Calculate carry bit for next position
4. Display the 4-bit result and final carry bit on output pins
