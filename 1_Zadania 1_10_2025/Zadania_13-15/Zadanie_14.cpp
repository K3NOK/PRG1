#include <iostream>
using namespace std;


bool isPrime(int liczba_sprawdzana) {
    int i;
    if (liczba_sprawdzana == 2) return true;
    if (liczba_sprawdzana % 2 == 0) return false;

    for (i = 3; i * i <= liczba_sprawdzana; i += 2) {
        if (liczba_sprawdzana % i == 0) return false;
    }
    return true;
}


int main(){
int n, status = 1, licznik;
while (status == 1){
    licznik = 2;
    cout << "Podaj liczbę naturalna 'n': ";
    cin >> n;
    cout << "liczby pierwsze w zakresie [2...n]to: ";
    while (licznik <= n) {
        if (isPrime(licznik) == true){
            cout << licznik << " ";
        }
        licznik += 1;
    }
cout << "czy chcesz kontynuowac?" << endl << "0 - nie , 1 - tak: ";
cin >> status;
}

return 0;
}