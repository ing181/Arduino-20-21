int tonePin = 8; 
int sensorPin = A0;
void setup() {
  pinMode(tonePin, OUTPUT);  // För output, till buzzern
  pinMode(sensorPin, INPUT); // för input, från ljuskänsliga resisteotn
}
void loop() {
// Spela första noten
//tone(tonePin, 1760, 300); // spela C4 i 125 ms
//delay(125); // vänta så att tonen hinner spela färdigt
//noTone(tonePin); // stäng av tonen
// Spela andra noten
// Inbygda funktioner finns färdiga i Ardinos bibliotek
// "tone" och "delay" och "noTone"
tone(tonePin, 440, 1000);  // (pinnen som används, Frekvensen, tid (i ms)
delay(1000);
noTone(tonePin);  // Tyst
}
