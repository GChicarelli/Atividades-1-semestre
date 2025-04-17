#include <Arduino.h>
#include "BluetoothSerial.h"

#define pinLed 2
#define pinLed1 4
#define pinLed2 18
#define pinLed3 19
#define pinLed4 21

BluetoothSerial SerialBT; // Cria um objeto Bluetooth Serial

const u_int8_t led[4] = {pinLed1, pinLed2, pinLed3, pinLed4}; // Array de pinos para os LEDs

void setup() {
    Serial.begin(9600);
    SerialBT.begin("ESP32_GuilhermeVM"); // Nome do dispositivo Bluetooth
    pinMode(pinLed, OUTPUT);
}

void loop() {
  while(SerialBT.available()) {
    SerialBT.println("Escolha um LED (1-4):");
    u_int8_t numeroLed = SerialBT.read() - 1;
    SerialBT.println("Escolha a intensidade (0-100%):");
    u_int8_t intensidadeLed = map(SerialBT.read(), 0 , 100, 0, 255);

    if(numeroLed == '\n') {
      if (numeroLed < 0 || numeroLed > 4) {
        SerialBT.println("Número inválido. Use 1-4 para escolher o LED.");
      }
      else if (intensidadeLed < 0 || intensidadeLed > 255) {
        SerialBT.println("Intensidade inválida. Use 0-100 para escolher a intensidade.");
      }
      else {
        analogWrite(numeroLed, intensidadeLed); // Liga o LED e define a intensidade
      }
    }
    else {
      SerialBT.println("Comando não reconhecido");
    }
  }
}