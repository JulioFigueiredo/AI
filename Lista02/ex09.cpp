const int botao1Pin = 6;
const int botao2Pin = 7;
const int ledPin = 4;

bool botao1Pressionado = false;
bool botao2Pressionado = false;
bool ledLigado = false;

void setup() {
  pinMode(botao1Pin, INPUT);
  pinMode(botao2Pin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool botao1Estado = digitalRead(botao1Pin);
  bool botao2Estado = digitalRead(botao2Pin);

  if (botao1Estado && botao2Estado) {
    while (true) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);

      if (!digitalRead(botao1Pin) || !digitalRead(botao2Pin)) {
        break;
      }
    }
  } else {
    if (botao1Estado && !botao2Pressionado) {
      digitalWrite(ledPin, HIGH);
      ledLigado = true;
    } else if (botao2Estado && !botao1Pressionado) {
      digitalWrite(ledPin, LOW);
      ledLigado = false;
    }
  }
 
  botao1Pressionado = botao1Estado;
  botao2Pressionado = botao2Estado;
}

