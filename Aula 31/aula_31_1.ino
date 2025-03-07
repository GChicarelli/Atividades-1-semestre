//Giuliano Keler Chicarelli

unsigned long tempo;

#define vermelho 13
#define pisca 1000
unsigned long tempoMs, antesPisca = 0;
bool led = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  tempoMs = millis();
  
  if(tempoMs - antesPisca >= pisca){
    
    led = !led; 
    antesPisca = tempoMs;
  }
  
  digitalWrite(vermelho, led);
  
}