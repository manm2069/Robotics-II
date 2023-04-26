/*
Led.cpp

This is a cpp file to allow for encapsulation of the codes within each variable in the LED class.

This code uses #include, "Led.h", Led, int, pin, void, init, pinMode, on, and digitalWrite.
*/

#include "Led.h"        // Includes the header file for the Led class

Led::Led(int pin) {      // Constructor for the Led class, with an integer argument for the pin number
  _pin = pin;            // Initializes the private variable "_pin" with the argument value
}

void Led::init() {       // Initializes the LED by setting the pinMode to OUTPUT
  pinMode(_pin, OUTPUT);
}

void Led::on() {         // Turns the LED on by setting the digital output of the pin to HIGH
  digitalWrite(_pin, 1);
}

void Led::off() {        // Turns the LED off by setting the digital output of the pin to LOW
  digitalWrite(_pin, 0);
}