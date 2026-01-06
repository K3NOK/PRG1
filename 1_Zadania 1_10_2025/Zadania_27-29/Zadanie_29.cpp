#include <iostream>
using namespace std;


void funkcja(int* ptr1,int* ptr2){
    if (*ptr2 < *ptr1){
        int tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
    }
}

int main(){
    int a,b;
    cout << "podaj pierwszy arg: ";
    cin >> a;
    cout << "podaj drugi arg: ";
    cin >> b;

    //int* ptr1 = &a;
    //int* ptr2 = &b;

    //if (*ptr2 < *ptr1){
    //    int tmp = *ptr1;
    //    *ptr1 = *ptr2;
    //    *ptr2 = tmp;
    //}

    funkcja(&a,&b);

    cout << "pierwszy ptr wskazuje na wartosc: " << a << endl<<"drugi ptr wskazuje na wartosc: " << b;
    return 0;
}