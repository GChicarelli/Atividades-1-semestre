#include <Arduino.h>

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define canalA 19
#define canalB 23

int contagem = 0;

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int8_t tabelaTransicao[4][4] =
{
 {0, 1, -1, 0},
 {-1, 0, 0, 1},
 {1, 0, 0, -1},
 {0, -1, 1, 0}
};

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(canalA, INPUT);
  pinMode(canalB, INPUT);
}

void loop()
{
  statizx int estadoAnteriotrEncoder = 3;
  static int estadoAtualEncoder = 0;
  static int estadoAnterior = 3;








  static int estadoAnterior = 3;
  int estadoAtual = (digitalRead(canalA) << 1 | digitalRead(canalB));
  static int posicao = 0;

  if (estadoAtual != estadoAnterior)
  {
    posicao = posicao + tabelaTransicao [estadoAnterior][estadoAtual];
    lcd.setCursor(0,0);
    lcd.print("CONTAGEM:    ");
    lcd.setCursor(10,0);
    lcd.print(posicao);

    estadoAnterior = estadoAtual;
  }
}











/*
#define canalA 18
#define canalB 19

const int8_t tabelaTransicao [4][4] = 
{
 { 0,  1, -1,  0},
 {-1,  0,  0,  1},
 { 1,  0,  0, -1},
 { 0, -1,  1,  0}
};

//* 10231023 HORARIO
//* 32013201 ANTIHORARIO


;

void setup() {
  pinMode(canalA, INPUT);
  pinMode(canalB, INPUT);
  Serial.begin(9600);

}

void loop() {
  bool leituraCanal = digitalRead(canalA);
  bool leituraCanalB = digitalRead(canalB);
  int estadoAnteriorEncoder = ((leituraCanal << 1) | leituraCanalB);
  static int estadoAtualEncoder = 3;

  static int posicao = 0; 

  posicao = posicao + tabelaTransicao[estadoAtualEncoder][estadoAnteriorEncoder];

  Serial.println(posicao);

  estadoAnteriorEncoder = estadoAtualEncoder;


}
*/

