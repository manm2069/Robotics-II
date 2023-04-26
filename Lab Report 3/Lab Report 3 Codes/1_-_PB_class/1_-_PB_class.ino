/*
1_-_PB_class.ino

This is an ino file that makes uses of the push button class for its commands.

This code uses #include, "PBClass.h", PBClass, void, setup, Setial.begin, firstButton.init, loop, firstButton.readState, and firstButton.isPressed.
*/

#include "PBClass.h"  // Includes the header file for the PBClass

PBClass firstButton(13);  // Creates an instance of PBClass called "firstButton" and initializes it with the pin number 13

void setup() {         // The setup function, called once at the beginning of the sketch
  Serial.begin(9600);  // Starts serial communication at a baud rate of 9600
  firstButton.init();  // Initializes the "firstButton" instance by setting the pinMode to INPUT_PULLUP
}

void loop() {               // The loop function, called repeatedly
  firstButton.readState();  // Reads the current state of the button and stores it in the "state" private variable of the "firstButton" instance
  firstButton.isPressed();  // Checks whether the button is pressed and prints a message if it is
}