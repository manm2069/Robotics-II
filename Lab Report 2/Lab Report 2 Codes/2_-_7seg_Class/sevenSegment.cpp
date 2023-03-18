#include "sevenSegment.h"  // Includes the "sevenSegment" header

sevenSegment::sevenSegment(int multiPins[]) {  // In the class' constructor
  a = multiPins[0];                            // Put the 0th value of the array to a
  b = multiPins[1];                            // Put the 1st value of the array to b
  c = multiPins[2];                            // Put the 2nd value of the array to c
  d = multiPins[3];                            // Put the 3rd value of the array to d
  e = multiPins[4];                            // Put the 4th value of the array to e
  f = multiPins[5];                            // Put the 5th value of the array to f
  g = multiPins[6];                            // Put the 6th value of the array to g
}

void sevenSegment::init() {              // In the function "init"
  int pins[] = { a, b, c, d, e, f, g };  // Create an array composed of the values of a to g

  for (int i = 0; i < 8; i++) {  // The for loop initializes the array "pins[]" as output
    pinMode(pins[i], OUTPUT);
  }
}

void sevenSegment::count() {
  int oneSecond = 1000;  // Create a variable called "oneSecond" composed of 1000 milliseconds

  int pins[] = { a, b, c, d, e, f, g };  // Creates an array composed of the values of a to g

  // Creates arrays of the numbers 0 to 9 composed of the on and off values of the 7 segments
  int zero[] = { 1, 1, 1, 1, 1, 1, 0 };
  int one[] = { 0, 1, 1, 0, 0, 0, 0 };
  int two[] = { 1, 1, 0, 1, 1, 0, 1 };
  int three[] = { 1, 1, 1, 1, 0, 0, 1 };
  int four[] = { 0, 1, 1, 0, 0, 1, 1 };
  int five[] = { 1, 0, 1, 1, 0, 1, 1 };
  int six[] = { 1, 0, 1, 1, 1, 1, 1 };
  int seven[] = { 1, 1, 1, 0, 0, 0, 0 };
  int eight[] = { 1, 1, 1, 1, 1, 1, 1 };
  int nine[] = { 1, 1, 1, 0, 0, 1, 1 };

  // Zero
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], zero[i]);  // The for loop digitally writes on the array "pins[]" the value of "zero[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // One
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], one[i]);  // The for loop digitally writes on the array "pins[]" the value of "one[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Two
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], two[i]);  // The for loop digitally writes on the array "pins[]" the value of "two[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Three
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], three[i]);  // The for loop digitally writes on the array "pins[]" the value of "three[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Four
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], four[i]);  // The for loop digitally writes on the array "pins[]" the value of "four[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Five
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], five[i]);  // The for loop digitally writes on the array "pins[]" the value of "five[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Six
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], six[i]);  // The for loop digitally writes on the array "pins[]" the value of "six[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Seven
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], seven[i]);  // The for loop digitally writes on the array "pins[]" the value of "seven[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Eight
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], eight[i]);  // The for loop digitally writes on the array "pins[]" the value of "eight[]"
  }
  delay(oneSecond);  // Delays the code by 1 second

  // Nine
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], nine[i]);  // The for loop digitally writes on the array "pins[]" the value of "nine[]"
  }
  delay(oneSecond);  // Delays the code by 1 second
}