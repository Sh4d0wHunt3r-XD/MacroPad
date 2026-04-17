#include <Arduino.h>
#include "includes/pins.h"
#include "includes/Buttons.h"

void setup() {
  Serial.begin(115200);
  pinMode(Button1,INPUT_PULLUP);
  pinMode(Button2,INPUT_PULLUP);
  pinMode(Button3,INPUT_PULLUP);
  pinMode(Button4,INPUT_PULLUP);
  pinMode(OperationSuccess, OUTPUT);
  pinMode(OperationFailed, OUTPUT);
  Ble_setup(OperationSuccess,OperationFailed);
  Serial.println("MacroPad baslatildi!");
}

void loop() {
  button_controls(Button1,Button2,Button3,Button4);
}
