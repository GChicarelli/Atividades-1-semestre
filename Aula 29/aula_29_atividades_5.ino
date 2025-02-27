int numeroA = 8;
int numeroB = 4;
int numeroC = 5;
int numeroD = 6;
float resultadoReal;

void setup()
{
  Serial.begin(9600); 
  resultadoReal = ((numeroA + numeroB + numeroC + numeroD)/4);
    Serial.print("Sua nota foi "); Serial.println(resultadoReal); 
  if(resultadoReal >= 7){
    Serial.print("Aprovado!");
    
  }else if(resultadoReal < 7 & resultadoReal >= 5){
    Serial.print("Voce esta de resuperacao!");
  }
  
  else{
  Serial.println("Reprovado! Da proxima voce consegue!");
  }
}

void loop()
{
 
}