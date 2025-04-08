#include <Arduino.h>

struct Pessoa 
{
  char nome [20];
  int idade;
  float altura;
  bool calvice;
};

Pessoa aluno; 
Pessoa colega;

void setup() {
  Serial.begin (9600);  

  strcpy(aluno.nome, "Giuliano");
  aluno.idade = 18;
  aluno.altura = 1.74;
  aluno.calvice = false;

  Serial.printf("Meu Nome é: %s \n\r", aluno.nome);
  Serial.printf("E tenho %d anos \n\r", aluno.idade);
  Serial.printf("tenho %.2f metros de altura \n\r", aluno.altura);
  Serial.printf("E %s calvo\n\r", aluno.calvice ? "sou" : "não sou");

  strcpy(colega.nome, "Guilherme");
  colega.idade = 19;
  colega.altura = 1.77;
  colega.calvice = false;

  Serial.printf("Meu Nome é: %s \n\r", colega.nome);
  Serial.printf("E tenho %d anos \n\r", colega.idade);
  Serial.printf("tenho %.2f metros de altura \n\r", colega.altura);
  Serial.printf("E %s calvo\n\r", colega.calvice ? "sou" : "não sou");

}

void loop() {

}