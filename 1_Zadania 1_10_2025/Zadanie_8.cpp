#include <iostream>

using namespace std;

int main(){
    double komenda, pierwsza, druga, wynik, status;
    status = 1;
    cout << "Witaj w kalkulatorze!" << endl;
    
    while (status!=0)
    {
        cout << "Wybierz jedną z komend" << endl << "dostępne komendy to: 1-dodawanie 2-odejmowanie 3-mnożenie 4-dzielenie 0-zakończ działanie kalkulatora" << endl;

        cin >> komenda;
        if (komenda == 0){status = 0;}

        if (komenda == 1 ){
            cout << "Wybrano dodawanie"<< endl << "podaj dwie liczby do działania" << endl;
            cin >> pierwsza >> druga;
            wynik = pierwsza + druga;
            cout << pierwsza << " + " << druga << " to: " << wynik << " <----------------" << endl << endl;
        }

        if (komenda == 2 ){
            cout << "Wybrano odejmowanie"<< endl << "podaj dwie liczby do działania" << endl;
            cin >> pierwsza >> druga;
            wynik = pierwsza - druga;
            cout << pierwsza << " - " << druga << " to: " << wynik << " <----------------" << endl << endl;
        }

        if (komenda == 3 ){
            cout << "Wybrano mnożenie"<< endl << "podaj dwie liczby do działania" << endl;
            cin >> pierwsza >> druga;
            wynik = pierwsza * druga;
            cout << pierwsza << " * " << druga << " to: " << wynik << " <----------------" << endl << endl;
        }

        if (komenda == 4 ){
            cout << "Wybrano dzielenie"<< endl << "podaj dwie liczby do działania" << endl;
            cin >> pierwsza >> druga;
            wynik = pierwsza / druga;
            cout << pierwsza << " / " << druga << " to: " << wynik << " <----------------" << endl << endl;
        }

        
    }
    
    cout << endl << "------ Zakończono działanie kalkulatora ------" << endl << endl;






     return 0;
}