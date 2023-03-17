/*
Count from 0 to 9 on 7 seg using switch case and functions

This code makes it so a 7 segment display counts from 0 to 9 using switch case and functions.

This code uses int, void, setup, for, pinMode, loop, digitalWrite, switch, case, delay and break.
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

void dispZero() {  // This code runs if "dispZero" is called
  // Number 0
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "zero[]"
    digitalWrite(pins[i], zero[i]);
  }
}

void dispOne() {  // This code runs if "dispOne" is called
  // Number 1
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "one[]"
    digitalWrite(pins[i], one[i]);
  }
}

void dispTwo() {  // This code runs if "dispTwo" is called
  // Number 2
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "two[]"
    digitalWrite(pins[i], two[i]);
  }
}

void dispThree() {  // This code runs if "dispThree" is called
  // Number 3
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "three[]"
    digitalWrite(pins[i], three[i]);
  }
}

void dispFour() {  // This code runs if "dispFour" is called
  // Number 4
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "four[]"
    digitalWrite(pins[i], four[i]);
  }
}

void dispFive() {  // This code runs if "dispFive" is called
  // Number 5
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "five[]"
    digitalWrite(pins[i], five[i]);
  }
}

void dispSix() {  // This code runs if "dispSix" is called
  // Number 6
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "six[]"
    digitalWrite(pins[i], six[i]);
  }
}

void dispSeven() {  // This code runs if "dispSeven" is called
  // Number 7
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "seven[]"
    digitalWrite(pins[i], seven[i]);
  }
}

void dispEight() {  // This code runs if "dispEight" is called
  // Number 8
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "eight[]"
    digitalWrite(pins[i], eight[i]);
  }
}

void dispNine() {  // This code runs if "dispNine" is called
  // Number 9
  for (int i = 0; i <= 7; i++) {  // The for loop digitally writes on the array "pins[]" the value of "nine[]"
    digitalWrite(pins[i], nine[i]);
  }
}

void loop() {                     // This code runs for as long as the Arduino is running
  for (int i = 0; i <= 9; i++) {  // The for loop activates the 0 to 9 cases in succession
    switch (i) {
      case 0:
        dispZero();   // Calls and intiates the codes of the function "dispZero()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 1:
        dispOne();    // Calls and intiates the codes of the function "dispOne()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 2:
        dispTwo();    // Calls and intiates the codes of the function "dispTwo()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 3:
        dispThree();  // Calls and intiates the codes of the function "dispThree()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 4:
        dispFour();   // Calls and intiates the codes of the function "dispFour()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 5:
        dispFive();   // Calls and intiates the codes of the function "dispFive()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 6:
        dispSix();    // Calls and intiates the codes of the function "dispSix()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 7:
        dispSeven();  // Calls and intiates the codes of the function "dispSeven()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 8:
        dispEight();  // Calls and intiates the codes of the function "dispEight()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
      case 9:
        dispNine();   // Calls and intiates the codes of the function "dispNine()"
        delay(1000);  // Delays the code by 1 second
        break;        // The switch case breaks
    }
  }
}
