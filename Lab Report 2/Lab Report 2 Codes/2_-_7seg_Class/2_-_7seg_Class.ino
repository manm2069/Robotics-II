/*
7seg Class

This code counts from 0 to 9 in a 7 segment display using classes.

This code makes use of #include, int, void, setup, loop, #ifnder, #define, <Arduino.h>, class, private, public, #endif, for, pinMode, digitalWrite, and delay.
*/

#include "sevenSegment.h"  // Includes the "sevenSegment" header in the code

int displayPins[] = { 2, 3, 4, 5, 6, 7, 8 };  // Creates an array of the pins used in the seven segment display

sevenSegment firstDisplay(displayPins);  // Constructs a 7 segment display using the pins in the array

void setup() {          // Code runs once
  firstDisplay.init();  // Initializes the 7 segment display
}

void loop() {            // Code runs forever
  firstDisplay.count();  // Counts from 0 to 9 in the 7 segment display
}
