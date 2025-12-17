#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    int suma,n;
    suma = 0;
    cout << "podaj liczbe elementow tablicy: ";
    cin >> n;
    int* tabb = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++){
        tabb[i] = rand() % 100;
        suma += tabb[i];
    }
    cout << "suma wszystkich elementow to: " << suma;
    delete[] tabb;
    system("pause");
    return 0;
}