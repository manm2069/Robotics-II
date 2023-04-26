/*
4_-_Capacitor.ino

This is an ino file that prints in the value read from A0 which has a capacitor and a resistor in the circuit.

This code uses int, void, setup, Serial.begin, loop, analogRead, Serial.println, and delay.
*/

int value;  // Declare a variable to store the analog value

void setup() {
  Serial.begin(9600);  // Begin the serial communication with a baud rate of 9600
}

void loop() {
  value = analogRead(A0);  // Read the analog value from pin A0 and store it in the 'value' variable
  Serial.println(value);   // Print the analog value to the serial monitor
  delay(50);               // Delay for 50 milliseconds
}