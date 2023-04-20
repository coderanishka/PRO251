#include<WiFi.h>

//  wifi credentials
const char ssid[] = "Ggggtatasky2.4g";
const char password[] = "pari7513";

//  potpin on GPIO 34
const int potentiometer_pin = 34;

void setup()
{
  Serial.begin(115200);

  //  connecting to wifi
  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{

  //  reading potentiometer at an interval of 1 sec
  int potentiometer = analogRead(potentiometer_pin);
  Serial.print("Pot values : ");
  Serial.println(potentiometer);
  delay(1000);

}
