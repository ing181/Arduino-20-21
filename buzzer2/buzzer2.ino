int sensorPin = A0;
int buzzerPin = 8;
int sensor;
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
 }
void loop() {
sensor = analogRead(sensorPin);
tone(buzzerPin, sensor, 1000);
//delay(100);
//noTone(buzzerPin);
}
