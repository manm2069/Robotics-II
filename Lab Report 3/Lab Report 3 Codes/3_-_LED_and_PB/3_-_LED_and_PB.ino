/*
3_-_LED_and_PB.ino

This is an ino file that makes uses of the push button class and the LED class for its commands.

This code uses #include, "Led.h", "PBClass.h", int, Led, PBClass, void, setup, Serial.begin, Red.init, Blue.init, Green.init, Yellow.init, Button.init, loop, Button.howManyPressed, switch, case, Red.on, Red.off, Blue.on, Blue.off,
Green.on, Green.off, Yellow.on, Yellow.off, break, and Serial.println.
*/

#include "Led.h"      // include the Led library
#include "PBClass.h"  // include the PBClass library

int buttonPressed = 0;  // declare a variable for storing the button press status
int chosenLed;          // declare a variable for storing the chosen LED

Led Red(12);    // create an instance of the Led class for the red LED
Led Blue(11);   // create an instance of the Led class for the blue LED
Led Green(10);  // create an instance of the Led class for the green LED
Led Yellow(9);  // create an instance of the Led class for the yellow LED

PBClass Button(13);  // create an instance of the PBClass class for the button

void setup() {
  Serial.begin(9600);  // initialize the serial communication

  Red.init();     // initialize the red LED
  Blue.init();    // initialize the blue LED
  Green.init();   // initialize the green LED
  Yellow.init();  // initialize the yellow LED

  Button.init();  // initialize the button
}

void loop() {
  chosenLed = Button.howManyPressed();  // read the number of times the button has been pressed

  switch (chosenLed) {  // choose an LED based on the number of button presses
    case 1:
      Red.on();      // turn on the red LED
      Blue.off();    // turn off the blue LED
      Green.off();   // turn off the green LED
      Yellow.off();  // turn off the yellow LED
      break;
    case 2:
      Red.off();     // turn off the red LED
      Blue.on();     // turn on the blue LED
      Green.off();   // turn off the green LED
      Yellow.off();  // turn off the yellow LED
      break;
    case 3:
      Red.off();     // turn off the red LED
      Blue.off();    // turn off the blue LED
      Green.on();    // turn on the green LED
      Yellow.off();  // turn off the yellow LED
      break;
    case 4:
      Red.off();              // turn off the red LED
      Blue.off();             // turn off the blue LED
      Green.off();            // turn off the green LED
      Yellow.on();            // turn on the yellow LED
      Button.howManyReset();  // reset the button press count
      break;
  }

  Serial.println(chosenLed);  // print the number of button presses to the serial monitor
}