#define pot A0 
int valor; 
void setup()
{
Serial.begin(9600); 
}
void loop()
{
valor = analogRead(A0); 
Serial.print("Valor do Potenciometro = "); 
Serial.println(valor); 
delay(250); 
}