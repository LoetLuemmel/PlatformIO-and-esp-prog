/*
 * Blink
 * Turns on an LED for one second (1000 ms),
 * then off for one second, repeatedly.
 */

#include <Arduino.h>
int led_state;
// Set LED_BUILTIN if it is not defined by Arduino framework
#define LED_BUILTIN 2

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // initialise the serial monitor port
  Serial.begin(115200);
  delay(1000);
  Serial.println("Welcome to PlatformIO");
}

void loop()
{
  
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  led_state=1;
  Serial.println("LED On");

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  led_state=0;
  Serial.println("LED Off");

   // wait for a second
  delay(1000);
}
