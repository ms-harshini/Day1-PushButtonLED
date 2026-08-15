#include <Arduino.h>

// Day 1: Push-Button Controlled LED
// Author: Jaya | #30DayIoTSeries

const int ledPin = 13;     // LED connected to digital pin 13
const int buttonPin = 2;   // Push button connected to digital pin 2

int ledState = LOW;        // Current state of the LED
int lastButtonState = HIGH; // Previous reading from the button

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Button uses internal pull-up resistor
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Detect a press (HIGH -> LOW transition, since pull-up is active-low)
  if (buttonState == LOW && lastButtonState == HIGH) {
    ledState = !ledState;             // Flip the LED state
    digitalWrite(ledPin, ledState);
    Serial.print("Button pressed! LED is now: ");
    Serial.println(ledState ? "ON" : "OFF");
    delay(200);  // Simple debounce
  }

  lastButtonState = buttonState;
}