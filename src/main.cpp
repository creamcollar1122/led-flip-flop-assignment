#include <Arduino.h>

// Pin assignments for LEDs
const int ledPin1 = 13; // Red LED
const int ledPin2 = 12; // Green LED

void setup() {
  // Set pin modes
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Flip-flop logic
  digitalWrite(ledPin1, HIGH); // Turn on red LED
  digitalWrite(ledPin2, LOW);  // Turn off green LED
  delay(500);                  // Wait for 500ms

  digitalWrite(ledPin1, LOW);  // Turn off red LED
  digitalWrite(ledPin2, HIGH); // Turn on green LED
  delay(500);                  // Wait for 500ms
}
