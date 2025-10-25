#include <iostream>

using namespace std;

int main(){
    double PLNperH, nadgodziny, przegodziny,brutto, netto;
    string katzasz;

    while (katzasz != "STOP") {

        cout << "podaj kategorie zaszergowania pracownika (A/B/C/D) lub wpisz STOP aby wylaczyc program" << endl;
        cin >> katzasz;

        if (katzasz == "STOP") {
            break;
        } else if (katzasz == "A") {
            PLNperH = 15;
        } else if (katzasz == "B") {
            PLNperH = 25;
        } else if (katzasz == "C") {
            PLNperH = 30;
        } else if (katzasz == "D") {
            PLNperH = 35;
        }


        cout << "podaj liczbe przepracowanych godzin w tygodniu" << endl;
        cin >> przegodziny;

        if (przegodziny > 40.0) {
            nadgodziny = przegodziny - 40;
            brutto = (40 * PLNperH) + (nadgodziny * PLNperH * 2);
        } else {
            brutto = przegodziny * PLNperH;
        }

        if (brutto <= 700){
            netto = brutto * 0.85;
        } else if (brutto > 700 && brutto <= 1200) {
            netto = brutto * 0.8;
        } else {
            netto = brutto * 0.75;
        }
        
        cout << " - - - Pracownik zarobil przez tydzien " << netto << "PLN netto lub " << brutto << "PLN brutto. - - - " << endl<<endl;
    }
    return 0;
}


//brutto - na brudno całość bez podatkow
//netto - chajs po odjęciu podatkow