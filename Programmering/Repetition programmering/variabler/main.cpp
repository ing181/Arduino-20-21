#include <iostream> // Vi tar med kod som andra skrivit
                    // iostream är för att vi ska kunna
                    // mata in till programmet och för att
                    // kunna få en utskrift från programmet.
#include <string>   // För att kunna använda textsträngar
using namespace std; // Talar om att "cout", "endl;" m.m.
                     // som vi använder hör till namnrymden
                     // std
int main()
{

    // Variabler, "lådor" att ha data i
    // datatyp namn;
    // Vi tar upp tre olika variabeltyper
    int h; // En variabel för heltal
    float f; // Variabel för decimaltal
    string s; // För text (textsträngar)
    // "=" tilldelningsoperatorn
    // Används för att tilldela (ge) det som är
    // till vänster samma värde som det till höger
    h = 6;
    f = 6.77; // OBS! Kommapunkt, inte ","
    // cout är skärmen, << är utmatningsoperatorn
    // endl betyder ny rad. Avsluta med ;
    cout << h << endl;
    cout << f << endl;
    s = "Hejsan"; // s tilldelas "Hejsan"
    cout << s << endl;
    h = h + 10;
    cout << h << endl; // Vad skrivs ut nu?
    cout << "Mata in ett tal ";
    // cin är tangentbordet, >> är inmatningsoperatorn
    // Inmatning ( variabel h får värdet du matat in
    // från tangentbordet
    cin >> h;
    cout << "Du mata de in " << h << endl;

    return 0; // return, "skickar tillbaka"
              // till den som ansvarar för
              // att köra programmet: operativsystemet
}
