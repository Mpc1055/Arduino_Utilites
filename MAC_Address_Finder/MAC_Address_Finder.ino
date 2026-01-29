#include "WiFi.h"

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  Serial.print("ESP32 Board MAC Address: ");
  Serial.println(WiFi.macAddress());
}

void loop(){
 delay(2000);
   Serial.print("ESP32 Board MAC Address: ");
  Serial.println(WiFi.macAddress());
}