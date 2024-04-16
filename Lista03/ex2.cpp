int led = 9; 
int brilho = 0; 
int variacao = 5; 
void setup() {

pinMode(led, OUTPUT);
}
void loop() {

analogWrite(led, brilho);

brilho = brilho + variacao;

if (brilho == 0 || brilho == 255) {
variacao = -variacao ;
}

delay(500);
}