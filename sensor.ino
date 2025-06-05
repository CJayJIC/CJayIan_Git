#include "sensor.h"

DHT dht(DHT_PIN, DHT_TYPE);

void initSensors() {
  dht.begin();
  pinMode(PIR_PIN, INPUT);
}

float readTemperature() {
  return dht.readTemperature();
}

float readHumidity() {
  return dht.readHumidity();
}

bool readMotion() {
  return digitalRead(PIR_PIN) == HIGH;
}