#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27, 16, 2); 

#define pinLedA 8
#define pinBotaoA 13

#define pinLedB 9
#define pinBotaoB 12

#define pinLedC 10
#define pinBotaoC 11

void setup(){
  pinMode(pinBotaoA, INPUT);
  pinMode(pinLedA, OUTPUT);
  pinMode(pinBotaoB, INPUT);
  pinMode(pinLedB, OUTPUT);
  pinMode(pinBotaoC, INPUT);
  pinMode(pinLedC, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  lcd.print("Led1");
  lcd.setCursor(6,0);
  lcd.print("Led2");
  lcd.setCursor(12,0);
  lcd.print("Led3");
}

void loop(){
  
  
  bool estadoBotaoA = digitalRead(pinBotaoA);
  static bool estadoAnteriorBotaoA = 0;
  static bool estadoLedA = 0;
 //// 
  bool estadoBotaoB = digitalRead(pinBotaoB);
  static bool estadoAnteriorBotaoB = 0;
  static bool estadoLedB = 0;
 ////
  bool estadoBotaoC = digitalRead(pinBotaoC);
  static bool estadoAnteriorBotaoC = 0;
  static bool estadoLedC = 0;
 ////
  digitalWrite(pinLedA, estadoLedA);
  digitalWrite(pinLedB, estadoLedB);
  digitalWrite(pinLedC, estadoLedC);
 
  
  // Led A
  if (estadoBotaoA && !estadoAnteriorBotaoA){
    estadoLedA = !estadoLedA;
    digitalWrite(pinLedA, estadoLedA);
    
    lcd.setCursor(0,1);
    
    if (estadoLedA) {
      lcd.print("ON ");
    
    
    }else{
      lcd.print("OFF ");
    }
   
  }
  
  estadoAnteriorBotaoA = estadoBotaoA;
  
  // Led B
  if (estadoBotaoB && !estadoAnteriorBotaoB){
    estadoLedB = !estadoLedB;
    digitalWrite(pinLedB, estadoLedB);
    
    lcd.setCursor(6,1);
    
    if (estadoLedB) {
      lcd.print("ON ");
    
    
    }else{
      lcd.print("OFF ");
    }
   
  }estadoAnteriorBotaoB = estadoBotaoB;
  
  // Led C
  if (estadoBotaoC && !estadoAnteriorBotaoC){
    estadoLedC = !estadoLedC;
    digitalWrite(pinLedC, estadoLedC);
    
    lcd.setCursor(12,1);
    
    if (estadoLedC) {
      lcd.print("ON ");
    
    
    }else{
      lcd.print("OFF ");
    }
   
  }else{
  
  
  
  }estadoAnteriorBotaoC = estadoBotaoC;
}
