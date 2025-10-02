
#include <iostream>

using namespace std;

int main(){
    int a,b,e,c,d,f,x,y,D,Dx,Dy;
    
    cout<< "podaj wspolczynniki pierwszego równania" << endl;
    cin >> a >> b >> e;
    
    cout<< "podaj wspolczynniki drugiego równania" << endl;
    cin >> c >> d >> f;
    
    D = a * d - c * b;
    
    if (D == 0) {cout << "układ jest nieoznaczony lub sprzeczny" << endl;
    }
    
    else{
        
        Dx = e * d - f * b;
        Dy = a * f - c * e;
        x = Dx / D;
        y = Dy / D;
        
        cout<< "rozwiazaniem układu są liczby "<< "x = " << x << " y = " << y << endl;
    }
    
    
    return 0;
}


