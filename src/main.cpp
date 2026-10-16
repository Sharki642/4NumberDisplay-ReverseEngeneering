#include <Arduino.h>

// Pins anpassen, falls du andere benutzt
const int TOUCH_PIN = 13;  // IO vom Touch-Modul
const int LED_PIN   = 23;  // LED (mit 220 Ohm Vorwiderstand gegen GND)

// Falls dein Modul invertiert ist (HIGH = nicht berührt), auf true setzen
const bool TOUCH_INVERTED = false;

void setup() {
  Serial.begin(115200);
  pinMode(TOUCH_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  bool touched = digitalRead(TOUCH_PIN);
  if (TOUCH_INVERTED) touched = !touched;

  digitalWrite(LED_PIN, touched ? HIGH : LOW);

  // Debug-Ausgabe nur bei Änderung
  static bool last = false;
  if (touched != last) {
    Serial.println(touched ? "Touch erkannt -> LED an" : "Kein Touch -> LED aus");
    last = touched;
  }

  delay(100);
}