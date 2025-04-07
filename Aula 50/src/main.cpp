#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define S1 18
#define S2 19

bool estadoAnteriorS1 = false;
bool estadoAtualS1 = false;
bool estadoAtualS2 = false;
int contador = 0;

void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);  
  lcd.init();
  lcd.backlight();
  lcd.print("    =");
  lcd.setCursor(0, 1);
}

void loop() {
  estadoAtualS1 = digitalRead(S1);
  estadoAtualS2 = digitalRead(S2);

  if (estadoAtualS1 && !estadoAnteriorS1) {
    if (estadoAtualS2 == LOW) {
      contador++;
      lcd.setCursor(6, 0);
      lcd.print("Horario     ");
    } else {
      contador--;
      lcd.setCursor(6, 0);
      lcd.print("Anti-Horario");
    }
    
    // Contador
    lcd.setCursor(0, 1);
    lcd.print("                    ");
    lcd.setCursor(0, 1);
    lcd.print(contador);
  }

  // Atualiza o estado anterior
  estadoAnteriorS1 = estadoAtualS1;

  delay(5);
}