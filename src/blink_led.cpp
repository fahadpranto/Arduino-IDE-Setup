#include "blink_led.h"
#include <Arduino.h>

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);   // LED ON
  delay(1000);

  digitalWrite(pin, LOW);    // LED OFF
  delay(1000);
}