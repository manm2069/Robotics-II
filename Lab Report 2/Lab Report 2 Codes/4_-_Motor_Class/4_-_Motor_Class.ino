/*
Motor Class

This code the robot car's motors and code in their movements through the use of classes.

This code makes use of #include, int, void, setup, loop, delay, #ifndef, #define, class, private, #endif, pinMode, digitalWrite, and analogWrite.
*/

#include "motorClass.h"  // Includes the "sevenSegment" header in the code

int motors[] = { 5, 6, 7, 8 };  // Creates an array composed of the pin of the motors

motorClass robotCar(motors);  // Constructs the robot car's motors using the pins

void setup() {      // Run the following code once
  robotCar.init();  // Initialize the motors
}

void loop() {              // Run the following code in repeat
  robotCar.setSpeed(255);  // Sets the car's speed to 255

  robotCar.forward();  // Moves the car forwards
  delay(1000);         // Keeps the movement for 1 second

  robotCar.backward();  // Moves the car backwards
  delay(1000);          // Keeps the movement for 1 second
  robotCar.left();      // Moves the car left
  delay(1000);          // Keeps the movement for 1 second

  robotCar.right();  // Moves the car right
  delay(1000);       // Keeps the movement for 1 second

  robotCar.stop();  // Moves the car stop
  delay(1000);      // Keeps the movement for 1 second
}