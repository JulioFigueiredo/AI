bool indicador_verde = false;
bool botao_pressionado = false;

void setup() {
  pinMode(6, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  botao_pressionado = digitalRead(6);
  if (botao_pressionado == true) {
    digitalWrite(4, HIGH);
    delay(1000);
  } else {
    digitalWrite(4, LOW);
    delay(1000);
  }
}


