#include <Arduino.h>

char nome[20];
char nome2[20];

void setup() {
  Serial.begin(9600);
  strcpy(nome, "Thiago");
  Serial.println(nome);
  strcat(nome, " Oliveira");
  Serial.println(nome);
  int tamanho = strlen(nome);
  Serial.println(tamanho);

  if(strcmp("Thiago Oliveira", nome) == 0) Serial.println("São iguais");
  else Serial.println("São diferentes");

  if(strcmp("Thiago A Oliveira", nome) == 0) Serial.println("São iguais");
  else Serial.println("São diferentes");

  if(strncmp(nome2, nome, 6) == 0) // comopara os 6 primeiros caracteres 
  Serial.println("Os 6 primeiros são iguais");
  else Serial.println("O começo não é igual");

  char buffer [50];
  int temperatura = 25;
  sprintf(buffer, "Temperatura: %d °C", temperatura); 
  Serial.println(buffer); 


}

void loop() {

}