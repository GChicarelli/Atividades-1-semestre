#include <Arduino.h>
#define pinLed 5
#define pinButton 18

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool estadoBotao = digitalRead(pinButton);
  static bool estadoAnteriorBotao = 0;
  static bool estadoLed = 0;

  const unsigned long tempoDebounce = 50;
  static unsigned long tempoAnteriorDebounce = 0;
  unsigned long tempoAtual = millis();

  static int valor = 0;

  if (estadoBotao != estadoAnteriorBotao) {
    tempoAnteriorDebounce = tempoAtual;
  }

  if (tempoAtual - tempoAnteriorDebounce > tempoDebounce) {
    if (estadoBotao != estadoAnteriorBotao) {
      if (!estadoBotao) {
        estadoLed = !estadoLed;
        digitalWrite(pinLed, estadoLed);
        valor++;
        Serial.println(valor);
      }
    }
  }
  estadoAnteriorBotao = estadoBotao;
}