#include <iostream>
using namespace std;
/*
Formel för att convertera Farenheit till Celsius
Celsius = (F-32)*5/9
*/

float farenheitToCelsius(float);

int main()
{
    // cout är skärmen << är utmatningsoperatorn
    int a;
    // tilldelningsoperatorn =
    a = 6;
    cout << a << endl;
    // cin är tangentbordet och >> är inmatningsoperatorn
    cin >> a; // Här får a det inmatade värdet
    // Steg 1: Det inmatade värdet (som finns i a) adderas med 1
    // Steg 2: a tilldelas det nya värdet
    a = (a+1); // EX: Du matar in 2, 2+1 blir 3, a får värdet 3
    // +, -, * (gånger) och / (delat med)
    // fungerar på samma sätt
    cout << a << endl;
    // tone(tonePin,440, 1000) Exempel på funktion från Arduino
    // Vi gör en egen funktion
    cout << "Hur varmt är det? ";
    float f;
    cin >> f; // Användren matar in, värdet hamnar i c
    float c;
    // Ut från funktionen kommer det omvandlade värdet
    c = farenheitToCelsius(f); // Funktionen anropas, den används
    cout << "Omvandlat från Farenheit till Celsius: " << c << endl;
    return 0;
}
float farenheitToCelsius(float far)
{
    float cel;
   // Celsius = (Farenheit-32)*5/9
   cel = (far-32)*5/9;
    
    return cel;
}
