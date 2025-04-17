#include <arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int smokePin = 34;         
unsigned long lastReadTime = 0;  
const unsigned long interval = 1000; 

const int rainSensorPin = 35;           
unsigned long lastCheckTime = 0;        



void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  Serial.println("Sensor de fumaça iniciado (sem delay)...");
  Serial.println("Sensor de chuva iniciado...");
  lcd.print("Chuva: ");
  lcd.setCursor( 8, 0);
  lcd.print("Gases no ar:");
}

void loop() {  
  unsigned long currentTime = millis();

  // Executa a leitura apenas a cada "interval" milissegundos
  if (currentTime - lastReadTime >= interval) {
    lastReadTime = currentTime;

    int smokeValue = analogRead(smokePin);

    // Mapeia para escala de 0 a 10
    int intensity = map(smokeValue, 300, 2000, 0, 2000);
    intensity = constrain(intensity, 0, 2000);

    if (intensity > 0) {
      Serial.print("Fumaça detectada! Intensidade: ");
      Serial.println(intensity);
      lcd.setCursor( 9, 1);
      lcd.print(intensity);
      lcd.print("   ");
      
      if (intensity >= 750 && intensity <= 1499) {
        lcd.setCursor( 9, 2);
        lcd.print("Alerta");
        lcd.setCursor( 8, 3);
        lcd.print("Use EPI     ");

      } else if (intensity >= 1500 && intensity <= 2000) {
        lcd.setCursor( 9, 2);
        lcd.print("Perigo");
        lcd.setCursor( 8, 3);
        lcd.print("Saia rapido!");
        

      } else if (intensity <= 749) {
        lcd.setCursor( 8, 2);
        lcd.print("Seguro      ");
        lcd.setCursor( 8, 3);
        lcd.print("            ");
        
      }
       
    }
  }

  if (currentTime - lastCheckTime >= interval) {
    lastCheckTime = currentTime;

    int rainValue = analogRead(rainSensorPin);

    
    int intensity = map(rainValue, 2500, 500, 0, 10);
    intensity = constrain(intensity, 0, 10);

    if (intensity > 0) {
      Serial.print("Chuva detectada! Intensidade: ");
      lcd.setCursor( 0, 1);
      lcd.print("Molhado");
      Serial.println(intensity);
    }

    else 
    {
      Serial.println("seco");
      lcd.setCursor( 0, 1);
      lcd.print("Seco   ");
    }
  }
  
}