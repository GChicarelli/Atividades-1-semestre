#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define pinLedVerde 10
#define pinLedVermelho 11

#define pinBotaoLiga 4
#define pinBotaoPosicao 3

#define pinBotaoClaro 6
#define pinBotaoEscuro 5

int led = 10;

void setup() {
  // Configura os pinos como entrada ou saída
  pinMode(pinBotaoLiga, INPUT);
  pinMode(pinBotaoPosicao, INPUT);

  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedVermelho, OUTPUT);
  
  pinMode(pinBotaoClaro, INPUT);
  pinMode(pinBotaoEscuro, INPUT);

  // Inicializa o LCD
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

  // Mensagem inicial no LCD
  lcd.print("> LED A: OFF");
  lcd.setCursor(0, 1);
  lcd.print("  LED B: OFF");
}

void loop() {
  //Variáveis
  bool estadoBotaoLiga = digitalRead(pinBotaoLiga);
  bool estadoBotaoPosicao = digitalRead(pinBotaoPosicao);
  bool estadoBotaoClaro = digitalRead(pinBotaoClaro);
  bool estadoBotaoEscuro = digitalRead(pinBotaoEscuto);
  

  static bool estadoAnteriorBotaoLiga = 0;
  static bool estadoLed = 0;

  static bool estadoAnteriorBotaoPosicao = 0;
  static bool posicao = 0;
  
  

  // Botão Liga/Desliga
  if (estadoBotaoLiga && !estadoAnteriorBotaoLiga) {
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    
  // Atualiza LED
    lcd.setCursor(9, posicao);
    estadoLed ? lcd.print("ON ") : lcd.print("OFF");
    /*if (estadoLed == true) {
  		lcd.print("ON ");
    } else {
    	lcd.print("OFF");
    }*/
  }

  // Botão Posição
  if (estadoBotaoPosicao && !estadoAnteriorBotaoPosicao) {
    if (posicao) {
      lcd.setCursor(0, 1);
      lcd.print(" ");
      lcd.setCursor(0, 0);
      lcd.print(">");
    } else {
      lcd.setCursor(0, 0);
      lcd.print(" ");
      lcd.setCursor(0, 1);
      lcd.print(">");
    }
    posicao = !posicao;
    led = posicao ? 11 : 10;
  }

  // Reseta estado anterior
  estadoAnteriorBotaoLiga = estadoBotaoLiga;
  estadoAnteriorBotaoPosicao = estadoBotaoPosicao;
} 


/* 
    if(estadoLedA) analogWrite(pinLedA, 128);
    else analogWrite (pinLed, 0);
*/

