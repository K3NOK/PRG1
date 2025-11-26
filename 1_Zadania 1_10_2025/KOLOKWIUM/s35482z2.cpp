#include<iostream>
using namespace std;

int main(){
int n,i,s;
cout<<"podaj liczbe elementow w tablicy: ";
cin>>n;
int tablica[n];
for (i=0;i<n;i++){
    cout <<"podaj "<< i+1 << " element: ";
    cin>> tablica[i];
}
s=tablica[0];
for (i=0;i<n;i++){ 
    if(s < tablica[i]){
        s=tablica[i];
    }else if (s > tablica[i]){
        cout<<"false"<<endl;
        system("pause");
        return false;
    }
}



    cout<<"true"<<endl;
    system("pause");
    return true;
}