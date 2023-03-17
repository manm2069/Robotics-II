/*
Count from 0 to 9 on 7 seg using array

This code makes it so a 7 segment display counts from 0 to 9 using an array.

This code uses int, void, setup, for, pinMode, loop, digitalWrite, and delay.
*/

// Creates an array of the 7 letters that classify the pins of the 7 segment display as pins on the Arduino
int pins[] = { 7, 8, 9, 10, 11, 12, 13 };

// Creates arrays of the numbers of the 7 segment as a set of high and low outputs indicating which segment is on or off
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

void setup() {  // This code runs once
  // Initializes pin a to g as output
  for (int i = 0; i <= 7; i++) {  // The for loop initializes the array "pins[]"
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {  // This code runs for as long as the Arduino is running
  // Number 0
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "zero[]"
    digitalWrite(pins[i], zero[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 1
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "one[]"
    digitalWrite(pins[i], one[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 2
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "two[]"
    digitalWrite(pins[i], two[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 3
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "three[]"
    digitalWrite(pins[i], three[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 4
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "four[]"
    digitalWrite(pins[i], four[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 5
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "five[]"
    digitalWrite(pins[i], five[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 6
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "six[]"
    digitalWrite(pins[i], six[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 7
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "seven[]"
    digitalWrite(pins[i], seven[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 8
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "eight[]"
    digitalWrite(pins[i], eight[i]);
  }
  delay(1000);  // Delays the code by 1 second

  // Number 9
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "nine[]"
    digitalWrite(pins[i], nine[i]);
  }
  delay(1000);  // Delays the code by 1 second
}
