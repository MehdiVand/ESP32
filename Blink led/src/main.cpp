#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

// void loop() {
//   if(Serial.available()){
//     String command = Serial.readStringUntil('\n');

//     if (command == "ON"){

//       digitalWrite(LED,HIGH);
//       Serial.println("LED on");

//     } else if (command=="OFF"){

//       digitalWrite(LED,LOW);
//       Serial.println("LED OFF");
//     }

//   }
// }

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("LED is on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(1000);
}
