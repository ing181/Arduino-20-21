// Example program
#include <iostream> // Vi inkluderar iostream. Behövs för 
                    // utskrift från programmet
                    // och för input till programmet från användaren
using namespace std; // Talar om att t.ex. "cout", "endl" som hör till
                     // namespace std ska användas.
int main()
{
    // skärmen, utmatningsoperatorn (<<)
    cout << "Hej, ursakta att jag klantat mig" << endl;
    // En "låda", en variabel för heltal skapas.
    int tal; // "int", integer, heltal och "tal" är ett namn som vi hittar på
    // Tilldelar, "ger variabeln ett värde"
    // namn, tilldelningsoperatorn (=), värde
    tal = 5;
    cout << tal << " och " << 5 << " har samma varde" << endl;
    // tal, för tillfället med värdet 5 får (tilldelas)  sig själv + 2
    // altså 5 + 2 Nytt värde: 7
    // tal tilldelas 5 + 2
    tal = (tal + 2);
    cout << tal << endl;
    // Inmatning från användaren
    // inmatningsoperatorn >>
    // tangentbordet, inmatningsoperatorn, variabeln
    int alder;
    cout << "Mata in din alder (år) ";
    cin >> alder; // välj ett heltal, ex. 4523, tryck "Enter" 
    cout << "Din alder ar " << alder << endl;
    if ( alder < 5 ) { // "Måsving parentes" "alt gr + 7"
        
        cout << "Du far ga in gratis" << endl;
        
    } // "alt gr + 0"
    else {
         cout << "Du far INTE ga in gratis" << endl;
    }
    
    // Decimaltal. Variabel för Decimaltal
    // Decimaltal brukar kallas för flyttal
    // En "låda", en variabel för flyttal skapas.
    float flyttal; // "float", decimaltal, och "flyttal" är ett namn som vi hittar på
    flyttal = 7.7; // OBS! DECIMALPUNKT!!
    cout << "Ett decimaltal (flyttal) " << flyttal << endl;
    }
    
    