/*
PB class

This code initializes and checks the state of a push button using classes.

This code makes use of #include, void, setup, Serial.begin, loop, #ifndef, #define, <Arduino.h>, class, private, int, public, #endif, pinMode, and Serial.println.
*/

#include "PBClass.h"  // Includes the "sevenSegment" header in the code

PBClass firstButton(13);  // Constructs a push button using pin 13

void setup() {         // Code runs once
  Serial.begin(9600);  // Initializes serial communication
  firstButton.init();  // Initializes the push button
}

void loop() {               // Code runs forever
  firstButton.readState();  // Reads the state of the push button
}
