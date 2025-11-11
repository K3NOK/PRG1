#include <iostream>
using namespace std;

int main(){
    int a, b,sum;
    cout << "prosze podac liczbe zetonow gracza A: ";
    cin >> a;
    cout << endl <<"prosze podac liczbe zetonow gracza B: ";
    cin >> b;

    if (a > 0 && b > 0){
        while (a != b){
            if (a < b){
                //gracz A wykonuje ruch
                b -= a;
            }else if (b < a){
                //gracz B wykonuje ruch
                a -= b;
            }
        }
        sum = a + b;
        cout << endl << "laczna pozostala liczba zetonow w grze to: " << sum << endl;
    }


    system("pause");
    return 0;
}