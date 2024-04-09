#include "printf.h"

enum ledIDNames { LED_BUILTIN_ID = 0 };

const unsigned ledIDs[] = {LED_BUILTIN};

byte ledStates[] = {LOW};

void switchLed(unsigned id) {
  digitalWrite(ledIDs[id], ledStates[id] = !ledStates[id]);
}

void debugInformation(unsigned id) {
  printf("LED on pin %d is %s\n", ledIDs[id], ledStates[id] ? "on" : "off");
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
  }
}

void loop() {
  switchLed(LED_BUILTIN_ID);
  debugInformation(LED_BUILTIN_ID);
  delay(1000);
}