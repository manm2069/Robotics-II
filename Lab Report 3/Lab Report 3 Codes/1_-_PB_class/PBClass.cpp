/*
PBClass.cpp

This is a cpp file to allow for encapsulation of the codes within each variable in the push button class.

This code uses #include, "PBClass.h", PBClass, pin, void, init, pinMode, readState, digitalRead, isPressed, if, Serial.println, and else if.
*/

#include "PBClass.h"  // Includes the header file for the PBClass

PBClass::PBClass(int pin) {  // Constructor for PBClass with an integer argument for the pin number
  this->pin = pin;           // Initializes the private variable "pin" with the argument value
  pressed = 0;               // Initializes the private variable "pressed" to 0
}

void PBClass::init() {  // Initializes the button by setting the pinMode to INPUT_PULLUP
  pinMode(pin, INPUT_PULLUP);
}

void PBClass::readState() {  // Reads the current state of the button and stores it in the private variable "state"
  state = digitalRead(pin);
}

void PBClass::isPressed() {  // Checks whether the button is pressed and prints a message if it is
  if (!state && !pressed) {  // If the button is pressed and "pressed" is 0, print a message and set "pressed" to 1
    Serial.println("The button has been pressed");
    pressed = 1;
  } else if (state && pressed) {  // If the button is not pressed and "pressed" is 1, set "pressed" back to 0
    pressed = 0;
  }
}