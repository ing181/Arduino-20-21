int tonePin = 8;
int sensorPin = A0;
void setup() {
  pinMode(tonePin, OUTPUT);
  pinMode(sensorPin, INPUT);
}
void loop() {
// Spela första noten
//tone(tonePin, 1760, 300); // spela C4 i 125 ms
//delay(125); // vänta så att tonen hinner spela färdigt
//noTone(tonePin); // stäng av tonen
// Spela andra noten
tone(tonePin, 440, 1000);
delay(1000);
noTone(tonePin);
}
