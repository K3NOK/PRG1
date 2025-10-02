
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(){
    double prmR, katA, Pole_wycinka_koła, Pole_trojkata, aRD, wynik;
    
    cout << "podaj promien R" << endl;
    cin >> prmR;
    
    cout<< "podaj kąt α" << endl;
    cin >> katA;
    
    Pole_wycinka_koła = (katA / 360) * M_PI * prmR * prmR;
    
    aRD = M_PI * katA / 180;
    
    Pole_trojkata = (1 / 2) * prmR * prmR * sin(aRD);
    
    wynik = Pole_wycinka_koła - Pole_trojkata;
    
    cout << "Pole odcinka kołowego o zadanym promieniu = " << prmR << " oraz kacie rozwarcia = "<< katA << " wynosi = "<< wynik << endl;
    
    return 0;
}