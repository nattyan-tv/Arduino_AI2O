#include <Arduino_A2IO.h>

#define REST A3
#define LED A4

ai2o = AI2O();

void setup() {
}

void loop() {
  analogWrite(LED, ai2o.i2o(analogRead(REST)));
}
