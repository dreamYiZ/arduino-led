#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

int LED_PIN = 10;
int LED_PIN_2 = 9;
int LED_PIN_3 = 8;

int DELAY_MS = 200 * 5;

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);

  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_PIN, HIGH);
  delay(DELAY_MS);
  digitalWrite(LED_PIN, LOW);
  delay(DELAY_MS);



  digitalWrite(LED_PIN_2, HIGH);
  delay(DELAY_MS);
  digitalWrite(LED_PIN_2, LOW);
  delay(DELAY_MS);

  digitalWrite(LED_PIN_3, HIGH);
  delay(DELAY_MS);
  digitalWrite(LED_PIN_3, LOW);
  delay(DELAY_MS);

  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  
  Serial.println("Loop Completed");
}

// put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }