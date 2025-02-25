/* 
Autor: Giuliano Keler Chicarelli
Data: 24/02/2025
Descrição: Matematica
*/

// Declaração de variaveis globais

int numeroA = 14;
int numeroB = 5;
int resultado = 0; 
float resultadoReal = 0;

void setup()
{
  Serial.begin(9600);
  
  // Soma 
  resultado = numeroA + numeroB;
  Serial.print("A soma do numero A com numero B eh: ");
  Serial.println(resultado);
  
  // Subtração
  resultado = numeroB - numeroA;
  Serial.print("A subtracao de numero B pela A: ");
  Serial.println(resultado);
  
  // Mutiplicação
  resultado = numeroA * numeroB;
  Serial.println("A multiplicacao de A e B eh:" );
  Serial.println(resultado);
  
  // Divisao 
  resultado = numeroA/numeroB;
  Serial.print("A divisao de A com B: ");
  Serial.println(resultado);
  resultado = numeroA % numeroB;
  Serial.print("e sobra: ");
  Serial.println(resultado);
  resultadoReal = (float)numeroA / (float)numeroB;
  Serial.print("ou ");
  Serial.println(resultadoReal, 1); // Limita a impressao do resultado em uma casa decimal 
  
  // Potencia
  resultado = pow(numeroA,numeroB); // "A" elevado a "B"
  Serial.print("Numero A elevado a numero B eh: ");
  Serial.println(resultado);
  
  // Quadrado 
  resultado = sq(numeroA); // numeroA elevado ao quadrado
  Serial.print("numero A elevado ao quadrado eh: ");
  Serial.println(resultado);
  
  // Raiz quadrada
  resultadoReal = sqrt (numeroA);
  Serial.print("A raiz quadrada de numeroA eh: ");
  Serial.println(resultadoReal);
  
  // Modulo
  resultado = abs(numeroA * -1);
  Serial.print("Modulo do numeroA: ");
  Serial.println(resultado);
  
  // Resticao 
  resultado = constrain(numeroA, -3, 5); // Restringe a variavel do numeroA aos limites -3 e 5
  Serial.print("A resticao da variavel do numeroA: ");
  Serial.println(resultado);
  
  // Reamapeamento 
  resultado = map (numeroA, 0, 20, 0, 10); // map(valor, deMenor, deMaior, paraMenor, paraMaior)
  Serial.print("Remapeamento do numeroA: ");
  Serial.println(resultado);
  
  // Operadores de atribuicao
  Serial.println(numeroA+=5); //numeroA = numeroA + 5
  Serial.println(numeroA-=5); //numeroA = numeroA - 5
  Serial.println(numeroA*=5);
  Serial.println(numeroA/=5);
  Serial.println(numeroA%=5);
  numeroA = 14;
  
  // Incrementar a variavel
  //numeroA = numeroA + 1
  Serial.println(numeroA++); //pos incremnto
  Serial.println(++numeroA); //pré incremnto 
  
  // Decrementar a variavel
  //numeroA = numeroA - 1
  Serial.println(numeroA--); //pos incremnto
  Serial.println(--numeroA); //pré incremnto 
  
  resultadoReal =  3*((2.0 / 5.0) + (2 * 3));
  Serial.println(resultadoReal);
  
  
  
 // (98, 0, 100, 0, 10)
  resultadoReal = (98.0/10);
  Serial.println(resultadoReal, 1);
  
  
  // (x, a, y, b, z)
  // (x/(y-a)) * (z - b)
  resultadoReal = (((1000.0-750)/(1000.0-500)) * 100) + (200-100);
  Serial.println(resultadoReal);
  Serial.println(map(750, 500, 1000, 100, 200));
  
  // 
}





void loop()
{
 
}