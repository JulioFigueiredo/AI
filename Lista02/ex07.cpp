bool indicador_verde = false;
bool botao = false;
int contadorcliques = 0;

void setup() {
  pinMode(6, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
    if (digitalRead(botao) == true) {
        contadorcliques++;
        for (int i = 1; i < contadorcliques; i++)
        {
            digitalWrite(4, HIGH);
            delay(1000/i);
  	        digitalWrite(4, LOW);
            delay(1000/i);
        }
        
    }
}