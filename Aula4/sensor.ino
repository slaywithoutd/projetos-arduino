#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// ==== CONFIGURAÇÕES DO LCD ====
LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço I2C mais comum; se não funcionar, teste 0x3F

// ==== PINOS DO SENSOR ULTRASSÔNICO ====
#define TRIG_PIN 32
#define ECHO_PIN 35

// ==== PINO DO BUZZER ====
#define BUZZER_PIN 33

// ==== LIMITE DE DISTÂNCIA (cm) ====
#define DISTANCIA_LIMITE 10

void setup() {
  Serial.begin(9600);

  // Inicializa LCD
  lcd.init();
  lcd.backlight();

  // Configura os pinos do sensor
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Configura o buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  lcd.setCursor(0, 0);
  lcd.print("Medidor de Dist.");
  lcd.setCursor(0, 1);
  lcd.print("Iniciando...");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Envia pulso para o sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Lê o tempo de resposta do Echo
  long duracao = pulseIn(ECHO_PIN, HIGH);

  // Calcula a distância em centímetros
  float distancia = duracao * 0.034 / 2;

  // Exibe no LCD
  lcd.setCursor(0, 0);
  lcd.print("Distancia: ");
  lcd.print(distancia, 1);
  lcd.print("cm   "); // espaços extras pra limpar resto da linha

  // Envia pro Serial Monitor (opcional)
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Aciona o buzzer se estiver abaixo do limite
  if (distancia > 0 && distancia < DISTANCIA_LIMITE) {
    digitalWrite(BUZZER_PIN, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("ALERTA! PROXIMO ");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    lcd.setCursor(0, 1);
    lcd.print("                "); // limpa linha
  }

  delay(500);
}
