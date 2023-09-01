#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

int LED_PIN = 10;


void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);

  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  Serial.println("Loop Completed");
}

// put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }