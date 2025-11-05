#include <iostream>
using namespace std;

int main(){
    int a, b, i, j, k;
    char znak;
    cout << "prosze podac dlugosc boku a: ";
    cin >> a;
    cout << endl << "prosze podac dlugosc bokou b: ";
    cin >> b;
    cout << endl << "prosze podac znak: ";
    cin >> znak;

    for (i = 1; i <= b; i++){
        if (i == 1||i==b){
            for (j = 1; j <= a; j++){
            cout << znak;
            }
        }else{
            cout << znak;
            for(k=1;k<(a-1);k++){
                cout << " ";
            }
            cout << znak;
        }         
        cout << endl;
    }
    



    system("pause");
    return 0;
}