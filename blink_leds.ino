/*
 * Programa: Piscar LEDs
 * Descrição: Este programa faz dois LEDs piscarem ao mesmo tempo.
 * Um LED é o LED interno do Arduino (LED_BUILTIN) e o outro está conectado ao pino 9.
 * 
 * Para iniciantes: Este é um programa simples para aprender os conceitos básicos do Arduino.
 */

// A função setup() é executada UMA VEZ quando o Arduino é ligado ou resetado
void setup()
{
  // pinMode() configura um pino como entrada (INPUT) ou saída (OUTPUT)
  // LED_BUILTIN é o LED que já vem embutido na placa Arduino (geralmente conectado ao pino 13)
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Configura o pino 9 como saída para controlar um LED externo
  pinMode(9, OUTPUT);
}

// A função loop() é executada REPETIDAMENTE enquanto o Arduino estiver ligado
void loop()
{
  // digitalWrite() escreve um valor em um pino digital
  // HIGH significa ligar (acender o LED) - envia 5V para o pino
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(9, HIGH);
  
  // delay() pausa o programa por um tempo em milissegundos
  // 1000 milissegundos = 1 segundo
  delay(1000); // Aguarda por 1000 milissegundos (1 segundo)
  
  // LOW significa desligar (apagar o LED) - envia 0V para o pino
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(9, LOW);
  
  // Aguarda mais 1 segundo antes de repetir o ciclo
  delay(1000); // Aguarda por 1000 milissegundos (1 segundo)
}
