
#define verde 13
#define amarelo 12
#define laranja 11
#define azul 10
#define vermelho 9



int garagem = 1;


void setup()
{
  Serial.begin(9600);
 
  switch(garagem){
    case 1:
     digitalWrite(verde, HIGH);
    break;
    
    case 2:
     digitalWrite(amarelo, HIGH);
    break;
    
    case 3:
     digitalWrite(laranja, HIGH);
    break;
    
    case 4:
     digitalWrite(azul, HIGH);
    break;
    
    case 5:
     digitalWrite(vermelho, HIGH);
    break;
    default:
     Serial.println("Garagem nao encontrada");
    break;
    
  
  
  
  
  
  
  
  
  
  }
}

void loop()
{
  
}