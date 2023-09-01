#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_TEMPLATE_ID "TMPL3-aQfbF9C"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "****P26F***YbdzXr_VwYg****1Zcs*****"

char ssid[] = "DESKTOP-5CM2M"; // username of WI-FI
char pass[] = "00000000"; // password of Wi-Fi

void setup()
{
// Debug console
Serial.begin(9600);
pinMode(4,OUTPUT); 



digitalWrite(4,LOW); // Make it low if you want everything to go off


Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
Blynk.run();
}
