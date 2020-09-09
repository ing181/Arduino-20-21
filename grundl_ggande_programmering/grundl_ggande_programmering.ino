long tal; // En variabel för decimaltal
int ar; // En variabel för heltal
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Vi skapar kontakt med "serial monitor" på den egna datorn.
  tal = 1000; // Variabeln får värdet 1000
  ar = 0; // Variabeln får värdet 0
}

void loop() {
  // put your main code here, to run repeatedly:

  
 // if (  1 == 1  ) {
 //     Serial.println("Detta är sant");   
 // }

 if ( ar == 10 ) {  // Om sant

     Serial.print("Din förmögenhet är ");
     Serial.print(tal);
    // Serial.print(ar);
     Serial.print('\n');
     tal=1000;
     ar=0;
 }
  else { // annars
     ar = ar + 1;
     tal = (tal * 1.05);
 }
 
} 
