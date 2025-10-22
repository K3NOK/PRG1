#include <iostream>

using namespace std;

int main(){
    int uczniowie, cukierki, wynik;
    
    cout<< "podaj ile jest uczniów w klasie Jasia " << endl;
    cin >> uczniowie;

    cout<< "podaj ilość cukierków zakupionych przez mamę" << endl;
    cin >> cukierki;

    if (cukierki < uczniowie - 1)
        cout << "za mało cukierków" << endl;
    else
        wynik = cukierki / (uczniowie - 1);
        cout << "" << endl;

    if (wynik == 1)
        cout << "kazdy dostanie " << wynik << " cukierek" << endl;
    else if (wynik >= 5)
        cout << "kazdy dostanie " << wynik << " cukierków" << endl;
    else
        cout << "kazdy dostanie " << wynik << " cukierki" << endl;
    
    return 0;
}

