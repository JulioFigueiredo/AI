char input;

#define ledRed 3
#define ledGreen 5
#define ledYellow 4
void setup() {

  Serial.begin(9600);

  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow,OUTPUT);

  digitalWrite (ledRed, LOW);
  digitalWrite (ledGreen, LOW);
  digitalWrite (ledYellow, LOW);
}
void loop() {

while (Serial.available() > 0) {

	input = Serial.read();

if (input == 'r' || input =='R'){
	digitalWrite(ledRed,!digitalRead(ledRed));
}
else if (input == 'g' || input =='G'){
	digitalWrite(ledGreen,!digitalRead(ledGreen));
}

else if (input == 'y' || input =='Y'){
	digitalWrite(ledYellow,!digitalRead(ledYellow));
}
	Serial.println(input);
}
}