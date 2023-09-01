#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_TEMPLATE_ID "TMPL3-aQfbF9C"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "aJ0SP26FYgYbdzXr_VwYgiC21ZcsVdWD"

char ssid[] = "DESKTOP-51ACM2M 0304"; // username of WI-FI
char pass[] = "28902077"; // password of Wi-Fi

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
