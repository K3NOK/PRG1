#include <iostream>
using namespace std;

int main(){
    int liczba,i,licznik,spacje,mainspacje;
    char znak;
    cout << "prosze podac szerokosc trojkata" << endl;
    cin >> liczba;
    cout << "prosze podac znak do utworzenia trojkata" << endl;
    cin >> znak;
    cout << endl;
    mainspacje = 0;
    for(i = liczba; i >= 1; i--){
        licznik = i;
        spacje = mainspacje;
        while(spacje > 0){
            cout <<" ";
            spacje -= 1;
        }
        while(licznik > 0){
            cout << znak <<" ";
            licznik -= 1;
        }
        mainspacje += 1;
        cout << endl;
    }

    system("pause");
    return 0;
}