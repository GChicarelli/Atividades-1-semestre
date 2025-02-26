
#define led 13

int bateria = 50;

void setup()
{
  if(bateria <= 80 & bateria >= 20){
  digitalWrite(led, HIGH);
  }
}

void loop()
{
  
}