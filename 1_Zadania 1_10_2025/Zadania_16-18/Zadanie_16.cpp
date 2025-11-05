#include <iostream>
using namespace std;

int main(){
    int a, b, i, j;
    char znak;
    cout << "prosze podac dlugosc boku a: ";
    cin >> a;
    cout << endl << "prosze podac dlugosc bokou b: ";
    cin >> b;
    cout << endl << "prosze podac znak: ";
    cin >> znak;

    for (i = 1; i <= b; i++){
        for (j = 1; j <= a; j++){
            cout << znak;
        }           
        cout << endl;
    }
    




    return 0;
}