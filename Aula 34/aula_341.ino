#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27, 16, 2); 

#define pinLedA 8
#define pinBotaoA 9

void setup(){
  pinMode(pinBotaoA, INPUT);
  pinMode(pinLedA, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  lcd.print("Estado LED A ");
}

void loop(){
  
  
  bool estadoBotaoA = digitalRead(pinBotaoA);
  static bool estadoAnteriorBotaoA = 0;
  static bool estadoLedA = 0;
  
  digitalWrite(pinLedA, estadoLedA);
  
  if (estadoBotaoA && !estadoAnteriorBotaoA){
    estadoLedA = !estadoLedA;
    digitalWrite(pinLedA, estadoLedA);
    
    lcd.setCursor(13,0);
    
    if (estadoLedA) {
      lcd.print("ON ");
    
    
    }else{
      lcd.print("OFF ");
    }
   
  }else{
  
  
  
  }
  
  estadoAnteriorBotaoA = estadoBotaoA;
}