#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
#define pinLed 2
#define pinBotao 0

LiquidCrystal lcd;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT);

  
}

void loop()
{
  bool estadoBotao = digitalRead(pinBotao); 
  
  if (estadoBotao == 0)
  {
  digitalWrite(pinLed, HIGH);
  delay(300);
  digitalWrite(pinLed, LOW);
  delay(300);
  }
}