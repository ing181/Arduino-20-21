
byte a = 0;
void setup() {
  // put your setup code here, to run once:
    // Open serial connection at 9600 Bd.
  Serial.begin(9600);
}
void loop() {
      a = miniraknaren(a);
      Serial.print(a);
      Serial.print("\n");
}
byte miniraknaren(byte a)
{
  a = (a + 1);
  delay(500);
  return a;
}
