#include <iostream>
using namespace std;
// Funktioner
// Iden med funktioner �r att flytta en del av
// koden fr�n huvudprogrammet.
// Koden l�ggs i st�llet p� en
// s�rskild plats.
// Varf�r?
// 1. Koden kanske redan finns, du kan anv�nda kod som
// n�gon annan gjort. EX: "delay(millesekunder);"
// "tone(buzzerPin, 440);"
// 2. Du vill anv�nda samma kod flera g�nger.
// Praktiskt att ha den p� ett st�lle. Mindre risk f�r fel.
// "typ av utv�rde" namn("typ av inv�rde (inv�rden)");
float addera(float,float);
int main()
{
    // F�r decimaltal
    float tala;
    float talb;
    // utmatning "<<", till sk�rmen "cout", av en "text inom citattecken"
    cout << "Mata in tv� decimaltal ";
    // inmatning ">>", fr�n tangentbordet "cin" till en variabel
    cin >> tala;
    cin >> talb;

    float summa;
    summa = addera(tala,talb); // Programmet forts�tter p� rad 42

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

