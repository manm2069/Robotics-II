/*
Count from 0 to 9 on 7 seg using for loop for pinmode

This code makes it so a 7 segment display counts from 0 to 9 using a for loop.

This code uses int, void, setup, for, pinMode, loop, digitalWrite, and delay.
*/

// Sets the 7 letters that classify the pins of the 7 segment display as pins on the Arduino
int a = 7;
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;

void setup() {  // This code runs once
  // Initializes pin a to g as output
  for (int i = 7; i <= 13; i++) {  // The for loop initializes pins 7 to 13 as output
    pinMode(i, OUTPUT);
  }
}

void loop() {  // This code runs for as long a the Arduino is running
  // Number 0 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
  delay(1000);  // Delays the code by 1 second

  // Number 1 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(1000);  // Delays the code by 1 second

  // Number 2 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 3 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 4 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 5 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 6 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 7 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(1000);  // Delays the code by 1 second

  // Number 8 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second

  // Number 9 (1 turns on the segment and 0 turns off the segment)
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(1000);  // Delays the code by 1 second
}
