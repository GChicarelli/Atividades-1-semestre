String funcionario = "Pedro";
String cargo = "RH";
float salario = 400;
float resultadoReal;

void setup()
{
  Serial.begin(9600);
  if(salario < 500){
   resultadoReal = ((salario / 100) * 30) + salario;
    Serial.print("Voce recebeu um aumento! Agora ira receber "); Serial.print(resultadoReal);
  }else{
  Serial.print("Apenas continue");
  }
}

void loop()
{
 
}