#include <Arduino.h>

struct Cores
{
  char nome [20];
  int R;
  int G;
  int B;
};

Cores cor1;
Cores cor2;
Cores cor3;
Cores cor4;


void setup() {
  Serial.begin (9600);  

  strcpy(cor1.nome, "Vermelho");
  cor1.R = 255;
  cor1.G = 0;
  cor1.B = 0;

  Serial.printf("A cor %s tem os valores: R: %d, G: %d, B: %d \n\r", cor1.nome, cor1.R, cor1.G, cor1.B);

  strcpy(cor2.nome, "Verde");
  cor2.R = 0;
  cor2.G = 255;
  cor2.B = 0;
  Serial.printf("A cor %s tem os valores: R: %d, G: %d, B: %d \n\r", cor2.nome, cor2.R, cor2.G, cor2.B);

  strcpy(cor3.nome, "Azul");
  cor3.R = 0;
  cor3.G = 0;
  cor3.B = 255;
  Serial.printf("A cor %s tem os valores: R: %d, G: %d, B: %d \n\r", cor3.nome, cor3.R, cor3.G, cor3.B);
 
}

void loop() {

}