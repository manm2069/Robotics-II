#include "motorClass.h"  // Includes the "motorClass" header

motorClass::motorClass(int multiPins[]) {  // In the class' constructor
  PWMA = multiPins[0];                     // Gives the value of the integer PWMA the value of the 0th value of multiPins[]
  PWMB = multiPins[1];                     // Gives the value of the integer PWMB the value of the 1st value of multiPins[]
  AIN1 = multiPins[2];                     // Gives the value of the integer AIN1 the value of the 2nd value of multiPins[]
  BIN1 = multiPins[3];                     // Gives the value of the integer BIN1 the value of the 3rd value of multiPins[]
}

void motorClass::init() {  // In the function called "init"
  pinMode(PWMA, OUTPUT);   // Initializes the pin of the PWMA as output
  pinMode(PWMB, OUTPUT);   // Initializes the pin of the PWMB as output
  pinMode(AIN1, OUTPUT);   // Initializes the pin of the AIN1 as output
  pinMode(BIN1, OUTPUT);   // Initializes the pin of the BIN1 as output
  pinMode(3, OUTPUT);      // Initializes pin 3 as output
  digitalWrite(3, 1);      // Turn pin 3 on
}

void motorClass::move(bool a, int x, bool b, int y) {  // In the function called "move"
  digitalWrite(AIN1, a);                               // Gives AIN1 the value of a
  analogWrite(PWMA, x);                                // Gives PWMA the value of x
  digitalWrite(BIN1, b);                               // Gives BIN1 the value of b
  analogWrite(PWMB, y);                                // Gives PWMB the value of y
}

void motorClass::setSpeed(int speed) {  // In the function called "setSpeed"
  this->speed = speed;                  // Gives the private value speed the value of speed in the function
}

void motorClass::forward() {         // In the function called "forward"
  move(1, speed / 2, 1, speed / 2);  // Calls the function move with the following parameters to move forward
}

void motorClass::backward() {        // In the function called "backward"
  move(0, speed / 2, 0, speed / 2);  // Calls the function move with the following parameters to move backwards
}

void motorClass::left() {            // In the function called "left"
  move(1, speed / 3, 0, speed / 3);  // Calls the function move with the following parameters to turn left
}

void motorClass::right() {           // In the function called "right"
  move(0, speed / 3, 1, speed / 3);  // Calls the function move with the following parameters to turn right
}

void motorClass::stop() {  // In the function called "stop"
  move(0, 0, 0, 0);        // Calls the function move with the following parameters to stop
}