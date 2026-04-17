#include <Arduino.h>
#ifndef USE_NIMBLE
#define USE_NIMBLE
#endif
#include <NimBLEDevice.h>
#include <BleKeyboard.h>
#include "includes/pins.h"
#include "includes/Buttons.h"

BleKeyboard bleKey("Shadow MicroPad","ShadowHunter",100);

unsigned long last_pressed = 0;
unsigned long press_delay = 300;
bool press_status = false;

void Ble_setup(int successfully_led, int failed_led){
  digitalWrite(successfully_led, HIGH);
  digitalWrite(failed_led, HIGH);
  delay(1000);
  digitalWrite(successfully_led, LOW);
  digitalWrite(failed_led, LOW);
  bleKey.begin(); //start bluetooth library
}

void DcMicrophone_func(){
  bleKey.releaseAll(); // release all keys
  bleKey.press(KEY_LEFT_CTRL); // press Left CTRL key
  bleKey.press(KEY_LEFT_SHIFT); // press Left SHIFT key
  bleKey.press('m'); // press Left SHIFT key
  bleKey.releaseAll(); // release all keys
}

void returnDesktop(){
  bleKey.releaseAll(); // release all keys
  bleKey.press(KEY_LEFT_GUI); // press WINDOWS key
  bleKey.press('d'); // press 'd' key
  bleKey.releaseAll(); // release all keys
}

void increase_volume(){
  bleKey.write(KEY_MEDIA_VOLUME_UP);
}

void decrease_volume(){
  bleKey.write(KEY_MEDIA_VOLUME_DOWN);
}

void button_controls(int b1,int b2,int b3,int b4){
  if (digitalRead(b1) == LOW && millis() - press_delay >= last_pressed){
    DcMicrophone_func();
    last_pressed = millis();
  } else if (digitalRead(b2) == LOW && millis() - press_delay >= last_pressed){
    returnDesktop();
    last_pressed = millis();
  } else if (digitalRead(b3) == LOW && millis() - press_delay >= last_pressed){
    increase_volume();
    last_pressed = millis();
  } else if (digitalRead(b4) == LOW && millis() - press_delay >= last_pressed){
    decrease_volume();
    last_pressed = millis();
  }
}