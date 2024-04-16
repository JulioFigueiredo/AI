#define LDR A0
#define led 8 
float lum; 
float amostra; 
void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT); 
digitalWrite(led, LOW); 
}
void loop()
{
amostra = 0; 

for(int i=0; i < 100 ; i++)
{
lum = analogRead(LDR); 
lum = (lume / 1024) * 100;

amostra = amostra + lum; 
}
//=================
amostra = amostra/100; 
Serial.print("Luminosidade = ");
Serial.print(amostra, 0); 
Serial.println("%"); 
if(amostra < 30) 
{
digitalWrite(led,HIGH); 
}
else 
{
digitalWrite(led,LOW); 
}
delay(250); 
}