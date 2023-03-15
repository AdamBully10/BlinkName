// This #include statement was automatically added by the Particle IDE.
#include "lib1.h"

void setup() {
  pinMode(D7, OUTPUT);
}

void loop() {
  // Letter A
  dot();
  dash();
  delay(500);
  dot();
  delay(500);
  
  // Letter D
  dash();
  delay(500);
  dot();
  delay(500);
  dot();
  delay(500);
  
  // Letter A
  dot();
  dash();
  delay(500);
  dot();
  delay(500);
}

void dot() {
  digitalWrite(D7, HIGH);
  delay(200);
  digitalWrite(D7, LOW);
  delay(200);
}

void dash() {
  digitalWrite(D7, HIGH);
  delay(600);
  digitalWrite(D7, LOW);
  delay(200);
}