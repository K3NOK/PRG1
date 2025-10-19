#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand ((int) time(NULL)); 
    int nWylosowana = rand() % 100 + 1; 
    int podana = 101;
    cout << "Wylosowano liczbe z zakresu 1 do 100. Zgadniesz jaka to?" << endl;
    while (nWylosowana != podana){
        cout << "Podaj liczbe: " << endl;
        cin >> podana;
        if (nWylosowana > podana){
            cout << "Podana liczba jest za mała" << endl;
        }
        else if (nWylosowana < podana){
            cout << "Podana liczba jest za duża" << endl;
        }
    }
    cout << " O_O  Udało ci się odgadnąć liczbę!  O_O" << endl;

    return 0;
}