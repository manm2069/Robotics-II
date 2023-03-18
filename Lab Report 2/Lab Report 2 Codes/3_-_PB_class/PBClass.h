#ifndef PBCLASS_H  // If the "PBClass.h" is not defined:
#define PBCLASS_H  // Define the "PBClass.h"

#include <Arduino.h>  // Includes the "Arduino" header in the code

class PBClass {  // Creates a class called "PBClass"

private:      // The private access
  int pin;    // Integer indicating the pin number
  int state;  // Integer indicating the state of the pin

public:              // The public access
  PBClass(){};       // The default constructor
  PBClass(int pin);  // The constructor of the class

  void init();       // Creates a function called "init"
  void readState();  // Creates a function called "readState"
};

#endif  // End the if statement