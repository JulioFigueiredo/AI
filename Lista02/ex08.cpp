int indicador_verde = 4;
int botaoPin = 6; 

void setup() {
  pinMode(botaoPin, INPUT);
  pinMode(indicador_verde, OUTPUT);
}

void loop() {
    bool botaoEstado = digitalRead(botaoPin);
    
    if (botaoEstado == HIGH) {
        digitalWrite(indicador_verde, HIGH);
        delay(1000);
  	    
    }
  
  	else {
      digitalWrite(indicador_verde, LOW);
        delay(1000);
    }
}
