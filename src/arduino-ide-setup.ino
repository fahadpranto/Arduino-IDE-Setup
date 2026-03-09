#include "blink_led.h"

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
}

void loop() {
  blinkLED(ledPin);          // Call LED blink function
}