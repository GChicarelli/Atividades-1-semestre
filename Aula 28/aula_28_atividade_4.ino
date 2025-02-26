// C++ code
//
int numeroA = 89, resultado;
#define lad 13

void setup()
{
  Serial.begin(9600);
 
  resultado = map(numeroA, 0, 1023, 0, 100);
  
   if(resultado > 80 || resultado < 20){
  	digitalWrite(lad, HIGH);
  }
  
  Serial.print("O valor "); Serial.print(resultado); Serial.println(" excedeu os limites");
  resultado = constrain(resultado, 20, 80);
  Serial.print("Valor reajustado para "); Serial.println(resultado);
  
}

void loop()
{
  
}