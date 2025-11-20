#include <iostream>
using namespace std;

int main(){
    int granica, zmienna, zmienna2, tmp;
    cout<<"prosze podac granice ciagu fib: ";
    cin>>granica;
    cout<<"0 ";
    for (zmienna=1,zmienna2=0;zmienna <= granica;tmp = zmienna,zmienna+=zmienna2,zmienna2 = tmp ){
        cout<< zmienna << " ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
