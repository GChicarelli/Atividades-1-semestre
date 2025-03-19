int resultado = 0;
int A = 1;
int B = 0;



void setup()
{
  Serial.begin(9600);
  
  for (int i = 10; i < 10; i--)
  {
    resultado = A + B;
    Serial.println(resultado);
    A = B;
    B = resultado;
  }
}

void loop()
{
  
}