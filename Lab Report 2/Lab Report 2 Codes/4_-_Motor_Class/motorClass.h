#ifndef MOTORCLASS_H  // If the "motorClass.h" is not defined
#define MOTORCLASS_H  // Define the "motorClass.h"

#include <Arduino.h>  // Includes the "Arduino" header in the code

class motorClass {  // Creates a class called "PBClass"
private:            // The private access
  int PWMA;         // Integer indicating the motor PWMA
  int PWMB;         // Integer indicating the motor PWMB
  int AIN1;         // Integer indicating the motor AIN1
  int BIN1;         // Integer indicating the motor BIN1
  int speed;        // Integer indicating the speed

public:                         // The public access
  motorClass(){};               // The default constructor
  motorClass(int multiPins[]);  // The constructor of the clas

  void init();                              // Creates a function called "init"
  void move(bool a, int x, bool b, int y);  // Creates a function called "move" requiring the values a, x, b, and y
  void setSpeed(int speed);                 // Creates a function called "setSpeed" requiring the value of speed
  void forward();                           // Creates a function called "forward"
  void backward();                          // Creates a function called "backward"
  void left();                              // Creates a function called "left"
  void right();                             // Creates a function called "right"
  void stop();                              // Creates a function called "stop"
};

#endif  // End the if statement