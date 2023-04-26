/*
PBClass.cpp

This is a cpp file to allow for encapsulation of the codes within each variable in the push button class.

This code uses #include, "PBClass.h", PBClass, pin, void, init, pinMode, readState, digitalRead, int, isPressed, if, Serial.println, return, else if, howManyPressed, and howManyReset.
*/

#include "PBClass.h"           // Includes the PBClass header file

PBClass::PBClass(int pin) {    // Constructor definition for PBClass, taking an integer argument for the pin number
  this->pin = pin;             // Assigns the pin number to the private member variable pin
  pressed = 0;                 // Initializes pressed to 0
  thisMany = 0;                // Initializes thisMany to 0
}

void PBClass::init() {         // Method definition for initializing the button
  pinMode(pin, INPUT_PULLUP);  // Sets the pin mode to INPUT_PULLUP
}

void PBClass::readState() {    // Method definition for reading the state of the button
  state = digitalRead(pin);    // Reads the state of the button and assigns it to the private member variable state
}

int PBClass::isPressed() {     // Method definition for checking whether the button has been pressed
  readState();                 // Reads the state of the button

  if (!state && !pressed) {    // If the button is pressed and not previously pressed
    Serial.println("The button has been pressed");  // Outputs the message to the Serial Monitor
    pressed = 1;               // Updates pressed to 1
    return 1;                  // Returns 1 to indicate that the button has been pressed
  } else if (state && pressed) {   // If the button is not pressed and previously pressed
    pressed = 0;               // Updates pressed to 0
  }
  return 0;                    // Returns 0 to indicate that the button has not been pressed
}

int PBClass::howManyPressed() {    // Method definition for getting the number of times the button has been pressed
  readState();                     // Reads the state of the button

  if (!state && !pressed) {        // If the button is pressed and not previously pressed
    pressed = 1;                   // Updates pressed to 1
    thisMany = thisMany + 1;        // Increments thisMany by 1
    return thisMany;               // Returns the updated value of thisMany
  } else if (state && pressed) {   // If the button is not pressed and previously pressed
    pressed = 0;                   // Updates pressed to 0
  }
  return thisMany;                 // Returns the current value of thisMany
}

void PBClass::howManyReset() {     // Method definition for resetting the number of times the button has been pressed
  thisMany = 0;                    // Resets thisMany to 0
}