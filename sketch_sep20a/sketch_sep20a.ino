
// File: sketch_sep20a.ino
// Description: Simplest Arduino functions - reading the two-digit decimal integer number from Serial Port
// Environment: Arduino IDE
//
// MIT License
// Copyright (c) 2017 Valentyn N Sichkar
// github.com/sichkar-valentyn
// Reference to:
// [1] Valentyn N Sichkar. Simplest Arduino functions - reading the two-digit decimal integer number from Serial Port // GitHub platform [Electronic resource]. URL: https://github.com/sichkar-valentyn/Simplest_Arduino_functions (date of access: XX.XX.XXXX)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // waiting for the first digit to be entered
  while (Serial.available() == 0) {}
  
  // Subtracting from the received first symbol 48 to convert from ASCII to integer number
  int i = Serial.read() - 48;
  
  // waiting for the second digit to be entered
  while (Serial.available() == 0) {}

  // Subtracting from the received second symbol 48 to convert from ASCII to integer number
  int j = Serial.read() - 48;

  // Moving out into one category to the left the first digit
  i = i * 10;
  
  // Getting the final result of input two-decimal integer number
  i = i + j;

  // Printing the result into the Serial Monitor
  Serial.println(i*i);
  delay(1000);
}

