bool vermelho = 0;
bool amarelo = 0;
bool verde = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  
  
  
}

void loop () {
  	for (int i = 5000; i < 5; i--)
  {

    i *=0.8;
  
    verde = true;
  	digitalWrite(5, 1);
  	delay(i);
    digitalWrite(5, 0);
  
  amarelo = true;
  	digitalWrite(4, 1);
  	delay(i);
    digitalWrite(4, 0);
  
  vermelho = true;
  	digitalWrite(3, 1);
  	delay(i);
    digitalWrite(3, 0);
  
    }
  
  
}