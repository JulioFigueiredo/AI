#define botA 6
#define botB 7
#define ledXOR 8
#define ledOU 9
#define ledE 10

boolean valA = 0;
boolean valB = 0;

void setup() {
  pinMode(ledXOR, OUTPUT);
  pinMode(ledOU, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(botA, INPUT);
  pinMode(botB, INPUT);
}

void loop() {
  valA = digitalRead(botA);
  valB = digitalRead(botB);
  digitalWrite(ledXOR, valA ^ valB);
  digitalWrite(ledOU, valA | valB);
  digitalWrite(ledE, valA & valB);
}
