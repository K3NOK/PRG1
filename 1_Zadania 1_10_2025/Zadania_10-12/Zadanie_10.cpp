#include <iostream>

using namespace std;

int main(){
    double a, b, a1,b1, nwp;
    cout << "podaj dwie liiczby calkowite: " << endl;
    cin >> a >> b;
    if (a > 0 && b > 0) {
        a1 = a;
        b1 = b;
        while (a1 != b1)
            if (a1 > b1)
                a1 -= b1;
            else
                b1 -= a1;
            nwp = a1;
            cout << "NWP wynosi: " << nwp << endl;
    }else{
        cout << "brak rozw." << endl;
    }
    system("pause");
    return 0;
}