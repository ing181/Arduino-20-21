#include <iostream> // Vi tar med kod som andra skrivit
                    // iostream �r f�r att vi ska kunna
                    // mata in till programmet och f�r att
                    // kunna f� en utskrift fr�n programmet.
#include <string>   // F�r att kunna anv�nda textstr�ngar
using namespace std; // Talar om att "cout", "endl;" m.m.
                     // som vi anv�nder h�r till namnrymden
                     // std
int main()
{

    // Variabler, "l�dor" att ha data i
    // datatyp namn;
    // Vi tar upp tre olika variabeltyper
    int h; // En variabel f�r heltal
    float f; // Variabel f�r decimaltal
    string s; // F�r text (textstr�ngar)
    // "=" tilldelningsoperatorn
    // Anv�nds f�r att tilldela (ge) det som �r
    // till v�nster samma v�rde som det till h�ger
    h = 6;
    f = 6.77; // OBS! Kommapunkt, inte ","
    // cout �r sk�rmen, << �r utmatningsoperatorn
    // endl betyder ny rad. Avsluta med ;
    cout << h << endl;
    cout << f << endl;
    s = "Hejsan"; // s tilldelas "Hejsan"
    cout << s << endl;
    h = h + 10;
    cout << h << endl; // Vad skrivs ut nu?
    cout << "Mata in ett tal ";
    // cin �r tangentbordet, >> �r inmatningsoperatorn
    // Inmatning ( variabel h f�r v�rdet du matat in
    // fr�n tangentbordet
    cin >> h;
    cout << "Du mata de in " << h << endl;

    return 0; // return, "skickar tillbaka"
              // till den som ansvarar f�r
              // att k�ra programmet: operativsystemet
}
