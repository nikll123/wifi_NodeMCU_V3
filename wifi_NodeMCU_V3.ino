//Wi-Fi модуль NodeMCU V3 ESP8266
//http://arduino.ua/prod1492-wi-fi-modyl-nodemcu-esp8266


#include <ESP8266WiFi.h>

#include <C:\Projects\wifi_NodeMCU_V3\password.h> // const char* password = "PSWD";
const char* ssid = "Keenetic-4312";


void setup() {
  Serial.begin(115200);
  Serial.println("");
  Serial.println(ssid);
  Serial.println(password);
  WiFi.begin(ssid, password);
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
