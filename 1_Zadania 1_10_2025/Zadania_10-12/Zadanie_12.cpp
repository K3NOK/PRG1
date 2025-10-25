#include <iostream>

using namespace std;

int main(){
    int p,q,wygrana,ver;
    char proceed;
    proceed = 't';
    cout << "wybierz wersję z której chciał byś skorzystać" <<endl<< "jeśli chcesz skorzystać z wersji z losowaniem wpisz: 1"<<endl<< "jeśli chcesz manualnie wprowadzić losy wpisz: 2"<<endl<<"wersja: ";
    cin >> ver;
    srand(time(NULL));
    //rand() % 6 +1;

    if (ver == 2){
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
    } else if (ver == 1){
        while(proceed == 't'||proceed == 'T'){
                p = rand() % 6 +1;
                q = rand() % 6 +1;
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
    }
    

    return 0;
}