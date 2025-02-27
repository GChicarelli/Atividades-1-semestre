String funcionario = "Pedro";
String cargo = "RH";
int salario = 900;
float resultadoReal;

void setup()
{
  Serial.begin(9600);
  if(salario < 1000){
   resultadoReal = ((salario / 100) * 10) + salario;
    Serial.print("Voce recebeu um aumento! Agora ira receber "); Serial.print(resultadoReal);
  }else{
  Serial.print("Apenas continue");
  }
}

void loop()
{
 
}