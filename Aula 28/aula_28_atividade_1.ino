
#define alerta 13 


int temperatura = 30 ;


void setup()
{
  Serial.begin(9600);
  
  if(temperatura >= 30){
    digitalWrite(alerta,HIGH);
  }
  
  
}

void loop()
{
  
}