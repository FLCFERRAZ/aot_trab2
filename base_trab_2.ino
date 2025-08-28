// TECHNICIAN IN SYSTEMS DEVELOPMENT - SENAC NH
// WORK 2: 4-bit adder
// TEACHER: Glauber Kiss de Souza
// DISC.: Technically Oriented Analysis

// Variables for the input nibbles (4 bits)
int nib1a, nib1b, nib1c, nib1d = 0;  // First number (bits a, b, c, d)
int nib2a, nib2b, nib2c, nib2d = 0;  // Second number (bits a, b, c, d)

// Variables for the result bits
int res1a, res1b, res1c, res1d = 0;  // 4-bit sum result
int carryBit = 0;                     // Carry bit (overflow)

void setup() {
    // Configure input pins for the two 4-bit numbers
    pinMode(0, INPUT);  // Bit a of the first number
    pinMode(1, INPUT);  // Bit b of the first number
    pinMode(2, INPUT);  // Bit c of the first number
    pinMode(3, INPUT);  // Bit d of the first number (most significant)
    
    pinMode(4, INPUT);  // Bit a of the second number
    pinMode(5, INPUT);  // Bit b of the second number
    pinMode(6, INPUT);  // Bit c of the second number
    pinMode(7, INPUT);  // Bit d of the second number (most significant)

    // Configure output pins for the result
    pinMode(8, OUTPUT);   // Bit a of the result
    pinMode(9, OUTPUT);   // Bit b of the result
    pinMode(10, OUTPUT);  // Bit c of the result
    pinMode(11, OUTPUT);  // Bit d of the result (most significant)
    pinMode(12, OUTPUT);  // Carry bit of the result

    // Pin 13 not currently used, configured as input
    pinMode(13, INPUT);
}

// Function to calculate the sum bit using boolean algebra
// Implements the logic of a full adder: S = A ⊕ B ⊕ Cin
int sumBit(int b1, int b2, int cIn) {
    return (b1 ^ b2) ^ cIn;
}

// Function to calculate the carry bit using boolean algebra
// Implements the logic of a full adder: Cout = (A AND B) OR (A AND Cin) OR (B AND Cin)
int sumCarryBit(int b1, int b2, int cIn) {
    return (b1 && b2) || (b1 && cIn) || (b2 && cIn);
}

void loop() {
    // Read the first 4-bit input (first number)
    nib1a = digitalRead(0);  // Least significant bit
    nib1b = digitalRead(1);
    nib1c = digitalRead(2);
    nib1d = digitalRead(3);  // Most significant bit

    // Read the next 4-bit input (second number)
    nib2a = digitalRead(4);  // Least significant bit
    nib2b = digitalRead(5);
    nib2c = digitalRead(6);
    nib2d = digitalRead(7);  // Most significant bit

    // Initialize carry bit to 0
    carryBit = 0;

    // Calculate the least significant bit of the result
    res1a = sumBit(nib1a, nib2a, carryBit);
    carryBit = sumCarryBit(nib1a, nib2a, carryBit);

    // Calculate the second bit of the result
    res1b = sumBit(nib1b, nib2b, carryBit);
    carryBit = sumCarryBit(nib1b, nib2b, carryBit);

    // Calculate the third bit of the result
    res1c = sumBit(nib1c, nib2c, carryBit);
    carryBit = sumCarryBit(nib1c, nib2c, carryBit);

    // Calculate the most significant bit of the result
    res1d = sumBit(nib1d, nib2d, carryBit);
    carryBit = sumCarryBit(nib1d, nib2d, carryBit);

    // Write the result to the output pins
    digitalWrite(8, res1a);
    digitalWrite(9, res1b);
    digitalWrite(10, res1c);
    digitalWrite(11, res1d);
    digitalWrite(12, carryBit);
}



