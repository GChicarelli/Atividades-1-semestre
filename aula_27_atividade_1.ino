/*
Autor: Giuliano Keler Chicarelli
Cauculadora de IMC
25/02/2025
*/

float numeroA = 100; 
float numeroB = 1.73;
float resultadoReal = 0;


void setup()
{
  Serial.begin(9600);

  resultadoReal = (numeroA/(numeroB*numeroB));
  
  if (resultadoReal >= 40){
    Serial.print("Obesidade II");
  }
  else if(resultadoReal < 40 & resultadoReal >= 30){
  Serial.print("Obesidade I");
  }
  else if(resultadoReal < 30 & resultadoReal >= 25){
  Serial.print("Sobrepeso");
  }
  else if(resultadoReal < 25 & resultadoReal >= 18.5){
  Serial.print("Normal");
  }
  else{
  Serial.print("Abaixo do peso");
  }
    
}

void loop()
{
  
}