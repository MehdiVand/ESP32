#include <Arduino.h>
#include <WiFi.h>

#define WIFI_SSID "xxxxx"
#define WIFI_PSW "123456789"

void setup()
{
  Serial.begin(921600);
  pinMode(BUILTIN_LED, OUTPUT);

  WiFi.begin(WIFI_SSID, WIFI_PSW);

  Serial.println("Starting");
}
bool isConnected = false;

void loop()
{

  if (WiFi.status() == WL_CONNECTED && !isConnected)
  {
    Serial.println("Connected");
    digitalWrite(BUILTIN_LED, HIGH);
    isConnected = true;
  }
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Connecting...");
    digitalWrite(BUILTIN_LED, !digitalRead(BUILTIN_LED));
    delay(100);
    isConnected = false;
  }
}
