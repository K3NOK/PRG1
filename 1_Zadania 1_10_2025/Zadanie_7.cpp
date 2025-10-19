#include <iostream>

using namespace std;

int main(){
    int a, b, a1,b1, nww;
    nww = 0;

    cout << "Podaj dwie liczby calkowite: " << endl;
    cin >> a >> b;
    
    if (a > 0 && b > 0) {
        a1 = a;
        b1 = b;
        while (a1 != b1)
            if (a1 > b1)
                b1 += b;
            else
                a1 += a;
        nww = a1;
        cout << nww << endl;
    }
    else
        nww = 0;
    


    return 0;
}