#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht (DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT Test!");
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if(isnan(h) || isnan(f) || isnan(t)) {
    Serial.println("Falied to read from the sensor");
    return;
  }

  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);
  Serial.println("-----------------------------------------------");
  Serial.println("Humidity: " + String(h) + " %");
  Serial.println("Temperature (in *C): " + String(t) + " *C");
  Serial.println("Temperature (in *F): " + String(f) + " *F");
  Serial.println("Heat Index (in *C): " + String(hic) + " *C");
  Serial.println("Heat Index (in *F): " + String(hif) + " *F");
}
