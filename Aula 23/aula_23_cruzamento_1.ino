/*
Autor: Giuliano Keler Chicarelli
Nome programa: Semaforo 
Descrição: Cruzamento 
Data: 20/02/2025
*/



void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);//vermelho (L)
  digitalWrite(4, HIGH);//pedestre(R) vermelho
  digitalWrite(6, HIGH);//pedestre(L) verde
  digitalWrite(8, HIGH);//verde (R) 
  delay(3000); 
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);//amarelo (R)
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);//vermelho (R)
  digitalWrite(4, LOW);//pedestre(R) vermelho
  digitalWrite(6, LOW);//pedestre(L) verde
  digitalWrite(5, HIGH);//pedestre(R) verde
  digitalWrite(7, HIGH);//pedestre(L)vermelho
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);//verde (L)
  delay(3000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);//amarelo (L)
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);//pedestre(R) verde
  digitalWrite(7, LOW);//pedestre(L)vermelho
}