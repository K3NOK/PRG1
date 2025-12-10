#include<iostream>
using namespace std;

int main(){
string słowo;
cout<<"prosze podac słowo do sprawdzenia"<<endl;
cin>> słowo;
for (int i =0;i < (słowo.length()/2);i++){
    if (słowo[i] != słowo[słowo.length() - (1+i)] ){
        cout<<"słowo nie jest palindromem";
        return 0;
    }
    
}
cout <<"słowo jest palindromem"<<endl;



    system("pause");
    return 0;
}
