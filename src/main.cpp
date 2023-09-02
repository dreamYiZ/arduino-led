#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

int LED_PIN = 10;
int LED_PIN_2 = 9;
int LED_PIN_3 = 8;

// int DELAY_MS = 200 * 5;

// void setup() {
//   // put your setup code here, to run once:
//   // int result = myFunction(2, 3);

//   pinMode(LED_PIN, OUTPUT);
//   pinMode(LED_PIN_2, OUTPUT);
//   pinMode(LED_PIN_3, OUTPUT);

//   Serial.begin(9600);

// }

/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade
*/

// int led = 9;         // the PWM pin the LED is attached to
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  // pinMode(led, OUTPUT);

   pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(LED_PIN, brightness);
  analogWrite(LED_PIN_2, brightness);
  analogWrite(LED_PIN_3, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
