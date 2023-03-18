/*
Display different number on four 7-seg using 74HC595

This code uses the 74HC595 integrated circuit to display different numbers in a 4 digit 7 segment.

This code makes use of const int, int, void, setup, pinMode, loop, digitalWrite, shiftOut, and delay.
*/

// Creates constant integer variables for the latch, clock, and data pins of the 74HC595 and sets them into the following Arduino pins
const int latchPin = A5;
const int clockPin = A1;
const int dataPin = 11;

// Creates constant integer variables for the 4 digits of the 7 segment and sets them into the following Arduino pins
const int digitOne = 12;
const int digitTwo = 13;
const int digitThree = A4;
const int digitFour = A0;

// Creates a constant integer variable called "segmentDelay"
const int segmentDelay = 5;

// Creates an array of bits that indicate the numbers on the 7 segment
int numbers[] = { B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11100110 };

void setup() {  // Run the following code once
  // Initializes the latch, clock, and data pins as outputs
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  // Initializes the pins for the 4 digit 7 segments as outputs
  pinMode(digitOne, OUTPUT);
  pinMode(digitTwo, OUTPUT);
  pinMode(digitThree, OUTPUT);
  pinMode(digitFour, OUTPUT);
}

void loop() {         // Run the following code in repeat
  displaySegments();  // Calls the function "displaySegments()"
}

void displaySegments() {  // Runs if the function "displaySegments()" is called
  // Digitally writes the first digit as low to turn it on
  digitalWrite(digitOne, LOW);
  digitalWrite(digitTwo, HIGH);
  digitalWrite(digitThree, HIGH);
  digitalWrite(digitFour, HIGH);
  digitalWrite(latchPin, LOW);                        // Digitally writes the latch as low as to turn on parallel out
  shiftOut(dataPin, clockPin, LSBFIRST, numbers[9]);  // Shits out using the data pin and clock pin from least significant bit first the number 9
  digitalWrite(latchPin, HIGH);                       // Digitally writes the latch as low as to turn off parallel out
  delay(segmentDelay);                                // Delays the code for 5 milliseconds

  // Digitally writes the second digit as low to turn it on
  digitalWrite(digitOne, HIGH);
  digitalWrite(digitTwo, LOW);
  digitalWrite(digitThree, HIGH);
  digitalWrite(digitFour, HIGH);
  digitalWrite(latchPin, LOW);                        // Digitally writes the latch as low as to turn on parallel out
  shiftOut(dataPin, clockPin, LSBFIRST, numbers[0]);  // Shits out using the data pin and clock pin from least significant bit first the number 0
  digitalWrite(latchPin, HIGH);                       // Digitally writes the latch as low as to turn off parallel out
  delay(segmentDelay);                                // Delays the code for 5 milliseconds

  // Digitally writes the third digit as low to turn it on
  digitalWrite(digitOne, HIGH);
  digitalWrite(digitTwo, HIGH);
  digitalWrite(digitThree, LOW);
  digitalWrite(digitFour, HIGH);
  digitalWrite(latchPin, LOW);                        // Digitally writes the latch as low as to turn on parallel out
  shiftOut(dataPin, clockPin, LSBFIRST, numbers[2]);  // Shits out using the data pin and clock pin from least significant bit first the number 2
  digitalWrite(latchPin, HIGH);                       // Digitally writes the latch as low as to turn off parallel out
  delay(segmentDelay);                                // Delays the code for 5 milliseconds

  // Digitally writes the fourth digit as low to turn it on
  digitalWrite(digitOne, HIGH);
  digitalWrite(digitTwo, HIGH);
  digitalWrite(digitThree, HIGH);
  digitalWrite(digitFour, LOW);
  digitalWrite(latchPin, LOW);                        // Digitally writes the latch as low as to turn on parallel out
  shiftOut(dataPin, clockPin, LSBFIRST, numbers[4]);  // Shits out using the data pin and clock pin from least significant bit first the number 4
  digitalWrite(latchPin, HIGH);                       // Digitally writes the latch as low as to turn off parallel out
  delay(segmentDelay);                                // Delays the code for 5 milliseconds
}