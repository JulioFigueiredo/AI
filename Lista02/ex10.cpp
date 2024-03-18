const int botao1Pin = 6;
const int botao2Pin = 7;
const int ledPin = 4;

void setup() {
 pinMode(botao1Pin, INPUT);
  pinMode(botao2Pin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool botao1Estado = digitalRead(botao1Pin);
  bool botao2Estado = digitalRead(botao2Pin);
  digitalWrite(ledPin, LOW);
  if (botao1Estado == HIGH && botao2Estado == LOW) {
    digitalWrite(ledPin, HIGH);
  } else if (botao1Estado == LOW && botao2Estado == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
