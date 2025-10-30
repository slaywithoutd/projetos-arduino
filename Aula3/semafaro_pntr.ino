// Código do Semáforo com ESP32 usando Ponteiros
// LED Verde: GPIO 12
// LED Amarelo: GPIO 14
// LED Vermelho: GPIO 27

// Definição dos pinos usando ponteiros
int *pinVerde = new int(12);
int *pinAmarelo = new int(14);
int *pinVermelho = new int(27);

// Tempos de cada fase (em milissegundos) usando ponteiros
int *tempoVermelho = new int(6000);  // 6 segundos
int *tempoVerde = new int(4000);     // 4 segundos
int *tempoAmarelo = new int(2000);   // 2 segundos

void setup() {
  // Configura os pinos como saída usando ponteiros
  pinMode(*pinVerde, OUTPUT);
  pinMode(*pinAmarelo, OUTPUT);
  pinMode(*pinVermelho, OUTPUT);
  
  // Garante que todos os LEDs começam apagados
  digitalWrite(*pinVerde, LOW);
  digitalWrite(*pinAmarelo, LOW);
  digitalWrite(*pinVermelho, LOW);
  
  // Inicializa comunicação serial para debug (opcional)
  Serial.begin(115200);
  Serial.println("Semáforo Iniciado!");
}

void loop() {
  // FASE 1: VERMELHO (6 segundos)
  Serial.println("Fase: VERMELHO");
  digitalWrite(*pinVermelho, HIGH);  // Liga LED vermelho
  digitalWrite(*pinAmarelo, LOW);    // Desliga LED amarelo
  digitalWrite(*pinVerde, LOW);      // Desliga LED verde
  delay(*tempoVermelho);             // Aguarda 6 segundos
  
  // FASE 2: VERDE (4 segundos)
  Serial.println("Fase: VERDE");
  digitalWrite(*pinVermelho, LOW);   // Desliga LED vermelho
  digitalWrite(*pinAmarelo, LOW);    // Desliga LED amarelo
  digitalWrite(*pinVerde, HIGH);     // Liga LED verde
  delay(*tempoVerde);                // Aguarda 4 segundos
  
  // FASE 3: AMARELO (2 segundos)
  Serial.println("Fase: AMARELO");
  digitalWrite(*pinVermelho, LOW);   // Desliga LED vermelho
  digitalWrite(*pinAmarelo, HIGH);   // Liga LED amarelo
  digitalWrite(*pinVerde, LOW);      // Desliga LED verde
  delay(*tempoAmarelo);              // Aguarda 2 segundos
  
  // O loop se repete automaticamente
}

// Função alternativa usando função auxiliar com ponteiros
void controlarLED(int *pin, bool estado) {
  digitalWrite(*pin, estado ? HIGH : LOW);
}

// Função para exibir informações do semáforo
void exibirInfo() {
  Serial.println("=== Configuração do Semáforo ===");
  Serial.print("LED Verde (GPIO): ");
  Serial.println(*pinVerde);
  Serial.print("LED Amarelo (GPIO): ");
  Serial.println(*pinAmarelo);
  Serial.print("LED Vermelho (GPIO): ");
  Serial.println(*pinVermelho);
  Serial.print("Tempo Vermelho: ");
  Serial.print(*tempoVermelho / 1000);
  Serial.println(" segundos");
  Serial.print("Tempo Verde: ");
  Serial.print(*tempoVerde / 1000);
  Serial.println(" segundos");
  Serial.print("Tempo Amarelo: ");
  Serial.print(*tempoAmarelo / 1000);
  Serial.println(" segundos");
}