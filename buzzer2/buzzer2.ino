int sensorPin = A0;
int buzzerPin = 8;
int sensor;
void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
 }
void loop() {
sensor = analogRead(sensorPin);
Serial.println(sensor);

if (sensor > 800) {
  tone(buzzerPin, 440);
  delay(1000);
}
  else {
  tone(buzzerPin, 220);
  delay(1000);
  }
  

/*
tone(buzzerPin, 440, 1000);
delay(1000);
noTone(buzzerPin);
*/
}
