int seg_a = 3;
int seg_b = 4;
int seg_c = 5;
int seg_d = 6;
int seg_e = 7;
int seg_f = 8;
int seg_g = 9;
int contador = 3;
int bot = 2;
short int m = 0;

void setup() {
  pinMode(bot, INPUT);
  for(contador; contador <= 9; contador++){
  	pinMode(contador, OUTPUT); 
    
  }
}

void loop() {
    if (digitalRead(bot) == 1) {
        // 0
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, LOW);
        delay(500);
        // 1
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        delay(500);
        // 2
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, LOW);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 3
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 4
        digitalWrite(seg_a, LOW);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 5 
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 6
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, LOW);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 7
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, LOW);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, LOW);
        digitalWrite(seg_g, LOW);
        delay(500);
        // 8
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, HIGH);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        delay(500);
        // 9
        digitalWrite(seg_a, HIGH);
        digitalWrite(seg_b, HIGH);
        digitalWrite(seg_c, HIGH);
        digitalWrite(seg_d, HIGH);
        digitalWrite(seg_e, LOW);
        digitalWrite(seg_f, HIGH);
        digitalWrite(seg_g, HIGH);
        delay(500);
    }




}