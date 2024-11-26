#include <Arduino.h>

// put function declarations here:
void blinkRythm(int number, int delayms);

void setup() {

  pinMode(BUILTIN_LED, OUTPUT);
  Serial.begin(921600);
  Serial.println("Serial set up began...");
}

void loop() {

  blinkRythm(10, 50);
  blinkRythm(1, 1000);
  // digitalWrite(BUILTIN_LED, HIGH);
  // delay(2000);
  // digitalWrite(BUILTIN_LED, LOW); 
  // delay(2000);
}

// put function definitions here:
void  blinkRythm(int number, int delayms) {

  for (int i = 0; i < number;i++){
      digitalWrite(BUILTIN_LED, HIGH);
    delay(delayms);
    digitalWrite(BUILTIN_LED, LOW); 
    delay(delayms);

  }
}