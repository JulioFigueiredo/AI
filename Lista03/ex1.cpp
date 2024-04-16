#define LED 13
boolean estado = false;
void setup()
{
 pinMode(LED_BUILTIN, OUTPUT); 
    Serial.begin(9600);

}
void loop()
{
 estado = false;
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(1000); 
 digitalWrite(LED_BUILTIN, LOW); 
 delay(1000); 
 
  if(LED_BUILTIN == HIGH) {
    estado = true;
  }
    else {
      estado = false;
    }
    Serial.println(estado);
}

