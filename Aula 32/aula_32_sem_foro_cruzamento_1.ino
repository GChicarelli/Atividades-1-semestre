// Giuliano Keler Chicarelli


unsigned long tempoAtual;
unsigned long tempoInicial; 

int amarelo = 2000;
int verde = 3000;


#define VERDE 13
#define AMARELO 12
#define VERMELHO 11
#define verdee 10
#define amareloe 9
#define vermelhoe 8




void setup()
{
 pinMode(VERDE, OUTPUT);
 pinMode(AMARELO,OUTPUT);
 pinMode(VERMELHO, OUTPUT);
 pinMode(verdee, OUTPUT);
 pinMode(amareloe,OUTPUT);
 pinMode(verdee, OUTPUT);
}

void loop()
{
  tempoAtual = millis();
  
  if(tempoAtual - tempoInicial < verde){
  digitalWrite(VERDE, HIGH);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, LOW);
  
  digitalWrite(verdee, LOW);
  digitalWrite(amareloe, LOW);
  digitalWrite(vermelhoe, HIGH);
    
  
  
  }else if(tempoAtual - tempoInicial < verde + amarelo){
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERMELHO, LOW);
    
  digitalWrite(verdee, LOW);
  digitalWrite(amareloe, LOW);
  digitalWrite(vermelhoe, HIGH);
  
  }else if(tempoAtual - tempoInicial < verde + amarelo){
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
    
  digitalWrite(verdee, HIGH);
  digitalWrite(amareloe, LOW);
  digitalWrite(vermelhoe, LOW);
    
  }else if(tempoAtual - tempoInicial < verde * 2 + amarelo){
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
    
  digitalWrite(verdee, HIGH);
  digitalWrite(amareloe, LOW);
  digitalWrite(vermelhoe, LOW);
   
  }else if(tempoAtual - tempoInicial <  verde * 2 + amarelo * 2 ){
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
    
  digitalWrite(verdee, LOW);
  digitalWrite(amareloe, HIGH);
  digitalWrite(vermelhoe, LOW);
   
  }else{
  tempoInicial = tempoAtual;
  }
    
 
}