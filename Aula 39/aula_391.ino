int pinLed[5] = {1,2,3,4,5};



void setup()
{
  for (int i = 0; i < 5; i++)
  {
  pinMode(pinLed[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(200);
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(500);
}