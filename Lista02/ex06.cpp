bool vermelho = 0;
bool amarelo = 0;
bool verde = 0;
int c = 0;
int botao = 2;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(botao, INPUT);

  
  
  
}

void loop () {
  	if (digitalRead(botao) == HIGH) {
        delay(150);
        switch (c) {
            case 1:
                verde = true;
  	            digitalWrite(5, 1);
  	            delay(500);
                break;
            case 2: 
                verde = false;
                digitalWrite(5, 0);
                delay(500);
                amarelo = true;
                digitalWrite(4, 1);
                delay(500);
                break;
            case 3:
                amarelo = false;
                digitalWrite(4, 0);
                delay(500);
                vermelho = true;
                digitalWrite(3, 1);
                delay(500);
                break;
        }

        c += 1;
        if (c > 3) {
            c = 0;
        }

    }
  
  
}