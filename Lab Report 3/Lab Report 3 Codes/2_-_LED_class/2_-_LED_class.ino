/*
2_-_LED_class.ino

This is an ino file that makes uses of the LED class for its commands.

This code uses #include, "Led.h", Led, void, setup, Red.init, loop, Red.on, delay, and Red.off.
*/

#include "Led.h"   // Includes the header file for the Led class

Led Red(13);         // Creates an instance of the Led class called "Red" and initializes it with the pin number 13

void setup() {      // The setup function, called once at the beginning of the sketch
  Red.init();        // Initializes the "Red" instance by setting the pinMode to OUTPUT
}

void loop() {       // The loop function, called repeatedly
  Red.on();          // Turns the LED on by calling the "on" method of the "Red" instance
  delay(1000);       // Waits for one second
  Red.off();         // Turns the LED off by calling the "off" method of the "Red" instance
  delay(1000);       // Waits for one second
}