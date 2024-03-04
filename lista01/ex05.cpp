bool indicador_verde = false;
bool botao_pressionado = false;

void setup() {
  pinMode(6, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
    digitalWrite(4, HIGH);
    delay(3000);
    digitalWrite(4, LOW);
    delay(3000);
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(4, LOW);
    delay(2000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(300);
    digitalWrite(4, LOW);
    delay(300);
  
}


