
int pinLed1 = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed1,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(pinLed1,HIGH);
    delay(1000);
    digitalWrite(pinLed1,LOW);
    delay(1000);

}
