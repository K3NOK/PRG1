#include <iostream>

using namespace std;

int main(){
    int a, b, a1,b1, nwp;
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
    }
    cout << "brak rozw." << endl;
    
    return 0;
}