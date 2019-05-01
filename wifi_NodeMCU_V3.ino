//Wi-Fi модуль NodeMCU V3 ESP8266
//http://arduino.ua/prod1492-wi-fi-modyl-nodemcu-esp8266


#include <ESP8266WiFi.h>
#include <credentials.h> // define SSID and PSWD

//const char* ssid = "Keenetic-4312";
//const char* password = "irAomoD4";

void setup() {
  Serial.begin(115200);
  //WiFi.begin(ssid, password);
  WiFi.begin("SSID", "PSWD");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
