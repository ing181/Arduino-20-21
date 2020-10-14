#include <iostream>
using namespace std;
// Funktioner
// Iden med funktioner är att flytta en del av
// koden från huvudprogrammet.
// Koden läggs i stället på en
// särskild plats.
// Varför?
// 1. Koden kanske redan finns, du kan använda kod som
// någon annan gjort. EX: "delay(millesekunder);"
// "tone(buzzerPin, 440);"
// 2. Du vill använda samma kod flera gånger.
// Praktiskt att ha den på ett ställe. Mindre risk för fel.
// "typ av utvärde" namn("typ av invärde (invärden)");
float addera(float,float);
int main()
{
    // För decimaltal
    float tala;
    float talb;
    // utmatning "<<", till skärmen "cout", av en "text inom citattecken"
    cout << "Mata in två decimaltal ";
    // inmatning ">>", från tangentbordet "cin" till en variabel
    cin >> tala;
    cin >> talb;

    float summa;
    summa = addera(tala,talb); // Programmet fortsätter på rad 42

   // float summa;
    // summa tilldelas "=", summan av tala och talb
   // summa = tala+talb;
    // Utskrift av summan OBS! Nya utmatningsoperatorer "<<"
    // vid ny text och nya variabler som ska visas
    cout << "Summan av " << tala << "+" << talb << "=" << summa << endl;



    return 0;
}
// datatyp namn(datatyp namn, datatyp namn);
float addera(float tala,float talb)
{
    float summa;
    summa = tala+talb;
    return summa; // Hoppar tillbaka till rad 28
}

