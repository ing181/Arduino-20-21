// Example program
#include <iostream> // Vi inkluderar iostream. Beh�vs f�r 
                    // utskrift fr�n programmet
                    // och f�r input till programmet fr�n anv�ndaren
using namespace std; // Talar om att t.ex. "cout", "endl" som h�r till
                     // namespace std ska anv�ndas.
int main()
{
    // sk�rmen, utmatningsoperatorn (<<)
    cout << "Hej, ursakta att jag klantat mig" << endl;
    // En "l�da", en variabel f�r heltal skapas.
    int tal; // "int", integer, heltal och "tal" �r ett namn som vi hittar p�
    // Tilldelar, "ger variabeln ett v�rde"
    // namn, tilldelningsoperatorn (=), v�rde
    tal = 5;
    cout << tal << " och " << 5 << " har samma varde" << endl;
    // tal, f�r tillf�llet med v�rdet 5 f�r (tilldelas)  sig sj�lv + 2
    // alts� 5 + 2 Nytt v�rde: 7
    // tal tilldelas 5 + 2
    tal = (tal + 2);
    cout << tal << endl;
    // Inmatning fr�n anv�ndaren
    // inmatningsoperatorn >>
    // tangentbordet, inmatningsoperatorn, variabeln
    int alder;
    cout << "Mata in din alder (�r) ";
    cin >> alder; // v�lj ett heltal, ex. 4523, tryck "Enter" 
    cout << "Din alder ar " << alder << endl;
    if ( alder < 5 ) { // "M�sving parentes" "alt gr + 7"
        
        cout << "Du far ga in gratis" << endl;
        
    } // "alt gr + 0"
    else {
         cout << "Du far INTE ga in gratis" << endl;
    }
    
    // Decimaltal. Variabel f�r Decimaltal
    // Decimaltal brukar kallas f�r flyttal
    // En "l�da", en variabel f�r flyttal skapas.
    float flyttal; // "float", decimaltal, och "flyttal" �r ett namn som vi hittar p�
    flyttal = 7.7; // OBS! DECIMALPUNKT!!
    cout << "Ett decimaltal (flyttal) " << flyttal << endl;
    }
    
    