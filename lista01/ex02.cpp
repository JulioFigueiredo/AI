bool vermelho = 0;
bool amarelo = 0;
bool verde = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop () {
  verde = true;
  	digitalWrite(5, 1);
  	delay(5000);
    digitalWrite(5, 0);
  
  amarelo = true;
  	digitalWrite(4, 1);
  	delay(5000);
    digitalWrite(4, 0);
  
  vermelho = true;
  	digitalWrite(3, 1);
  	delay(5000);
    digitalWrite(3, 0);
  
  
  
  
  
}
