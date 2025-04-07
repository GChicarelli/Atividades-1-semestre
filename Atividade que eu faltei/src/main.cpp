#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define pinButton 5
#define pinLed 2

LiquidCrystal_I2C lcd(0x27, 16, 2);
char tabuleiro[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
bool vezJogador = true;
bool jogoAtivo = true;

void mostrarTabuleiro();
bool verificarVitoria(char jogador);

void setup() {
    pinMode(pinButton, INPUT_PULLUP);
    pinMode(pinLed, OUTPUT);
    lcd.init();
    lcd.backlight();
    mostrarTabuleiro();
}

void loop() {
    if (digitalRead(pinButton) == LOW && jogoAtivo) {
        int posicao = random(1, 10); // Simula jogada automática
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (tabuleiro[i][j] == '0' + posicao) {
                    tabuleiro[i][j] = vezJogador ? 'X' : 'O';
                    vezJogador = !vezJogador;
                    mostrarTabuleiro();
                    if (verificarVitoria('X') || verificarVitoria('O')) {
                        lcd.setCursor(0, 1);
                        lcd.print("Fim de jogo!");
                        digitalWrite(pinLed, HIGH);
                        jogoAtivo = false;
                    }
                    delay(500);
                    return;
                }
            }
        }
    }
}

void mostrarTabuleiro() {
    lcd.clear();
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            lcd.setCursor(j * 2, i);
            lcd.print(tabuleiro[i][j]);
        }
    }
}

bool verificarVitoria(char jogador) {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return true;
        }
    }
    return (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
           (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador);
}
