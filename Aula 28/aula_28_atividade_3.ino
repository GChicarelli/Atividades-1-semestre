int numeroA = 4, resultado; 

#define led 13
void setup()
{
  Serial.begin(9600);
  resultado = numeroA % 2;
  if(resultado == 0){
  digitalWrite(led,HIGH);
  }
}

void loop()
{
 
}