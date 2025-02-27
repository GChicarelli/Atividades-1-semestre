int numeroA = 30;
int numeroB = 40;


void setup()
{
  Serial.begin(9600);
  if(numeroA > numeroB){
   Serial.print("Numero A e maior que B");
    
  }else if(numeroA < numeroB)
    Serial.print("Numero B e maior que A");
}else{
  Serial.print("Sao iguais")
}

void loop()
{
  
}