
int pinLed1 = 12; // ordet "pinLed1" är nu samma sak som att
                  // skriva siffran 12
void setup() {
  // put your setup code here, to run once:
  // Sätts att användas för output, skicka ström
  pinMode(pinLed1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed1,HIGH); // Stömmen på
  delay(1000); // Paus 1 sekund
  digitalWrite(pinLed1,LOW); // Stömmen av
  delay(1000); // Paus 1 sekund
  

}
