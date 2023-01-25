#include <Arduino.h>
#include "arduino_ai2o.h"

AI2O::AI2O() {
  ;
}

int AI2O::i2o(int input) {
  return input / 4;
}

int AI2O::o2i(int input) {
  return input * 4;
}
