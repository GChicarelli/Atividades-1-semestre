
int resultado = 0;
int A = 1;
int B = 0;
int i = 1;


void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  if (i <= 12){
  	resultado = A + B;
    Serial.println(resultado);
    A = B;
    B = resultado;
    i++;
  }
}