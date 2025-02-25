/*
Giuliano Keler Chicarelli
Projeto: Memorias 
21/02/2015
*/


unsigned int numero = 400; 

void setup()
{
  Serial.begin(9600);
  Serial.print("Tamanho dos tipos de variaveis em bytes");
  Serial.print("bool: "); Serial.println(sizeof(bool)); // 0 ou 1
  Serial.print("char: "); Serial.println(sizeof(char)); //0 a 255 caracteres 
  Serial.print("Byte: "); Serial.println(sizeof(byte));
  Serial.print("int: "); Serial.println(sizeof(int)); //-32768 a 32767
  Serial.print("unsigned int: "); Serial.println(sizeof(unsigned int)); //0 a 65535
  Serial.print("long: "); Serial.println(sizeof(long)); //2147483648 a 2147438647
  Serial.print("unsigned long: "); Serial.println(sizeof(unsigned long)); //0 a 4.294.967.295
  Serial.print("float: "); Serial.println(sizeof(float)); 
  // Aceita virgula
  //Valor maaximo positivo 3,4028235 x 10^38
  //valor minimo positvo 1,175494 x 10^-38
  //Valor maaximo positivo -3,4028235 x 10^-38
  //valor minimo positvo -1,175494 x 10^38
  Serial.print("double: "); Serial.println(sizeof(double)); //2.147.483.648 a 2.147.438.647
  
  Serial.print("int8_t: "); Serial.println(sizeof(int8_t));
  Serial.print("uint8_t: "); Serial.println(sizeof(uint8_t));
  Serial.print("int16_t: "); Serial.println(sizeof(int16_t));
  Serial.print("uint16_t: "); Serial.println(sizeof(uint16_t));
  Serial.print("int32_t: "); Serial.println(sizeof(int32_t));
  Serial.print("uint32_t: "); Serial.println(sizeof(uint32_t));
  Serial.print("int64_t: "); Serial.println(sizeof(int64_t));
  Serial.print("uint64_t: "); Serial.println(sizeof(uint64_t));
}

void loop()
{
  
}