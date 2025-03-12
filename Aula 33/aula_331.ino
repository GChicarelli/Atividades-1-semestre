#define pinLed 9
#define pinBotao 10

unsigned int valor = 0;
bool botaoPressionado = true;

void setup() {
  pinMode(pinBotao, INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool statusBotao = digitalRead(pinBotao);

  digitalWrite(pinLed, statusBotao);
  
  if (statusBotao == true && botaoPressionado == true) { 
    valor++;
    Serial.println(valor);
    botaoPressionado = false;
  }

  if (statusBotao == false) botaoPressionado = true;
}