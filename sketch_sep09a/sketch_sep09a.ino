int tonePin = 8;
void setup() {
  pinMode(tonePin, OUTPUT);
}
void loop() {
// Spela första noten
tone(tonePin, 1760, 300); // spela C4 i 125 ms
delay(125); // vänta så att tonen hinner spela färdigt
noTone(tonePin); // stäng av tonen
// Spela andra noten
tone(tonePin, 120, 50);
delay(100);
noTone(tonePin);
}
