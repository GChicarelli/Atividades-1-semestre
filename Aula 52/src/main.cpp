#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define pinLed1 15  // LED 1
#define pinLed2 2   // LED 2
#define pinLed3 4   // LED 3
#define pinLed4 5   // LED 4
#define CanalA 18   // CLK
#define CanalB 19   // DT
#define pinBotao 34 // Botão

const int8_t led[4] = {pinLed1, pinLed2, pinLed3, pinLed4};
const int8_t tabelaTransicao[4][4] = {
// * Sentido do Encoder
/*
	+1 = Horário
	 0 = Parado
	-1 = Anti-horário
*/

// * Posições do Encoder
/* 		  0  1  2  3 
	 0 	{00,01,02,03},

	 1 	{10,11,12,13},
	 2 	{20,21,22,23},
	 3 	{30,31,32,33}
*/

	{ 0, 1,-1, 0},
	{-1, 0, 0, 1},
	{ 1, 0, 0,-1},
	{ 0,-1, 1, 0}
};

// * Protótipo
void encoderUpdate();

void setup() {
  pinMode(CanalA, INPUT_PULLUP);
  pinMode(CanalB, INPUT_PULLUP);
  pinMode(pinBotao, INPUT_PULLUP);
  for (int i = 0; i < 4; i++) pinMode(i, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.print("> LED 1: OFF");
  lcd.setCursor(0, 1);
  lcd.print("  LED 2: OFF");
  lcd.setCursor(0, 2);
  lcd.print("  LED 3: OFF");
  lcd.setCursor(0, 3);
  lcd.print("  LED 4: OFF");
}

void loop() {
  bool leituraCanalA = digitalRead(CanalA);
  bool leituraCanalB = digitalRead(CanalB);
  int estadoAtualEncoder = ((leituraCanalA << 1) | leituraCanalB);
  static int estadoAnteriorEncoder = 3;

  static int contador = 0, acumuladorMovimento = 0;
  static bool estadoLed[4] = {0};

  if (estadoAnteriorEncoder != estadoAtualEncoder) {
    acumuladorMovimento += tabelaTransicao[estadoAnteriorEncoder][estadoAtualEncoder];
    if (contador > 3) contador = 0;
    else if (contador < 0) contador = 3;

    if (contador != estadoAnteriorEncoder) {
      lcd.setCursor(0, estadoAnteriorEncoder);
      lcd.print(" ");
      lcd.setCursor(0, contador);
      lcd.print(">");
      estadoAnteriorEncoder = contador;
    }
    if (acumuladorMovimento == 3) contador++;
    else if (acumuladorMovimento == -3) contador--;

    acumuladorMovimento = 0;
    estadoAnteriorEncoder = estadoAtualEncoder;
  }

  bool estadoBotao = digitalRead(pinBotao);
  static bool estadoBotaoAnterior = false;
  static unsigned long ultimoTempoBotao = 0;
  const unsigned long debounceDelay = 50;

  if (estadoBotao && !estadoBotaoAnterior) {
  unsigned long tempoAtual = millis();
    if (contador >= 0 && contador < 4) {
      estadoLed[contador] = !estadoLed[contador];
      digitalWrite(led[contador], estadoLed[contador]);
      lcd.setCursor(9, contador);
      estadoLed[contador] ? lcd.print("ON ") : lcd.print("OFF");
    }
  }
  
  estadoAnteriorEncoder = estadoAtualEncoder;
  estadoBotaoAnterior = estadoBotao;
}

void encoderUpdate(){

}