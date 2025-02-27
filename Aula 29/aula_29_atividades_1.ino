int numeroA = -4;

void setup()
{
  Serial.begin(9600);
  if( numeroA > 0){
   Serial.print("Positivo");
 
  }else if(numeroA < 0){
    Serial.print("Negativo");
  }
}

  
  void loop()
{
  
}