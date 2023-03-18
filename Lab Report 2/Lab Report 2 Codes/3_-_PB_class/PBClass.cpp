#include "PBClass.h"  // Includes the "PBClass" header

PBClass::PBClass(int pin) {  // In the class' constructor
  this->pin = pin;           // Gives the value of the pin integer in the private access the value of the pin typed in the constructor
}

void PBClass::init() {         // In the function called "init"
  pinMode(pin, INPUT_PULLUP);  // Initalizes the pin in the private access as a pullup input
}

void PBClass::readState() {  // In the function called "readState"
  state = digitalRead(pin);  // Gives the value of the state integer the value of the pin
  Serial.println(state);     // Prints in the serial monitor the state integer
}