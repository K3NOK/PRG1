#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n ,suma ,p ,p1 ,status;
status = 1;

while (status != 0){
    cout << "podaj n" << endl;
    cin >> n;
    suma = 0;
    p = sqrt(n);

    while (p > 1) {
        if (n % p == 0) {
            suma += p;
            p1 = (n / p);
            if (p1 != p) {
                suma += p1;
                }
            }
            p -= 1;
        }
    suma += 1;
    if (suma == n){
        cout << n << " JLD" << endl;
    }else{
        cout << n << " NJLD"<< endl;
    }

    cout << "czy chcesz kontynuowac? " << endl << "0 - nie , 1 - tak" << endl;
    cin >> status;
}
    return 0;
}