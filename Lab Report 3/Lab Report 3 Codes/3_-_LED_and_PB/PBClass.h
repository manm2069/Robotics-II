/*
PBClass.h

This is a header file to allow for encapsulation of the used variables in the push button class.

This code uses #ifndef, #define, #include, <Arduino.h>, class, private, int, public, PBClass, void, and #endif.
*/

#ifndef PBCLASS_H  // Checks whether PBCLASS_H has already been defined, to avoid duplicate declarations
#define PBCLASS_H  // Defines PBCLASS_H if it hasn't been defined yet

#include <Arduino.h>  // Includes the Arduino.h header file, which contains various definitions and functions for the Arduino platform

class PBClass {  // Defines a new class called PBClass

private:         // Declares the private variables of the class
  int pin;       // An integer variable for the pin number
  int state;     // An integer variable for the state of the button (pressed or not)
  int pressed;   // An integer variable for whether the button has been pressed or not
  int thisMany;  // An integer variable for the number of times the button has been pressed

public:              // Declares the public methods of the class
  PBClass(){};       // A constructor for the class, with no arguments
  PBClass(int pin);  // Another constructor for the class, with an integer argument for the pin number

  void init();           // A method to initialize the button
  void readState();      // A method to read the state of the button
  int isPressed();       // A method to check whether the button has been pressed
  int howManyPressed();  // A method to get the number of times the button has been pressed
  void howManyReset();   // A method to reset the number of times the button has been pressed to zero
};

#endif  // Ends the conditional compilation statement