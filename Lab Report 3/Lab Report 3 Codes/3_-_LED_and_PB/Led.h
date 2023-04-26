/*
Led.h

This is a header file to allow for encapsulation of the used variables in the LED class.

This code uses #ifndef, #define, #include, <Arduino.h>, class, private, int, public, Led, void, and #endif.
*/

#ifndef LED_H  // Checks whether LED_H has already been defined, to avoid duplicate declarations
#define LED_H  // Defines LED_H if it hasn't been defined yet

#include <Arduino.h>  // Includes the Arduino.h header file, which contains various definitions and functions for the Arduino platform

class Led {  // Defines a new class called Led

private:     // Declares the private variables of the class
  int _pin;  // An integer variable for the pin number

public:          // Declares the public methods of the class
  Led() {}       // A constructor for the class, with no arguments
  Led(int pin);  // Another constructor for the class, with an integer argument for the pin number

  void init();  // A method to initialize the LED
  void on();    // A method to turn the LED on
  void off();   // A method to turn the LED off
};

#endif  // Ends the conditional compilation statement