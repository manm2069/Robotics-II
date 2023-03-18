#ifndef SEVENSEGMENT_H  // If the "sevenSegment.h" is not defined:
#define SEVENSEGMENT_H  // Define the "sevenSegment.h"

#include <Arduino.h>  // Includes the "Arduino" header in the code

class sevenSegment {  // Creates a class called "sevenSegment"
private:              // The private access
  // Creates integers a to g
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;

public:                           // The public access
  sevenSegment() {}               // The default constructor
  sevenSegment(int multiPins[]);  // The constructor of the class using the array

  void init();   // Creates a function called "init"
  void count();  // Creates a function called "count"
};

#endif  // End the if statement