#include <iostream>

using namespace std;

int main(){
    int p,q,wygrana;
    char proceed;
    proceed = 't';
    //srand(time(NULL));
    //rand() % 6 +1;
    while(proceed == 't'||proceed == 'T'){
        cout << endl << "podaj zmienną p"<< endl;
        cin >> p;
        cout <<"podaj zmienną q"<< endl;
        cin >> q;
        
        if (p % 2 == 0){
            if (q == 2 || q == 4 || q == 5){
                wygrana = p + (3 * q);
            } else {
                wygrana = 2 * q;
            }
        }else{
            if (q == 2|| q == 4 || q == 5){
                wygrana = min(p,q) + 4;
            }else{
                if (p == q){
                    wygrana = (5 * p) + 3;
                }else{
                    wygrana = (2 * q) + p;
                }
            }
        }
        if (p == 5, q == 5){
            wygrana += 5;
        }
        cout << "q= " << q << ", p = " << p << " a wygrana wynosi " << wygrana << endl;
        cout << "czy chcesz kontynuować? t/n:";
        cin >> proceed;
        


    }


    return 0;
}