#include <iostream>
using namespace std;

int mian(){
    int a,b;
    cout << "podaj pierwszy arg: ";
    cin >> a;
    cout << "podaj drugi arg: ";
    cin >> b;
    int* ptr1 = &a;
    int* ptr2 = &b;

    if (*ptr2 < *ptr1){
        int tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
    }

    cout << "pierwszy ptr wskazuje na wartosc: " << a << endl<<"drugi ptr wskazuje na wartosc: " << b;
    return 0;
}