#include<iostream>
using namespace std;

int main(){
int n,i,s;
s = 0;
cout<<"podaj liczbe elementow w tablicy: ";
cin>>n;
int tablica[n];
for (i=0;i<n;i++){
    cout <<"podaj "<< i+1 << " element: ";
    cin>> tablica[i];
}
for (i=0;i<n;i++){
    if (tablica[i] % 2 == 0){
        s+=tablica[i];
        //cout<<tablica[i]<<" "<<s<<endl;
    }
}
cout << s<<endl;


    system("pause");
    return 0;
}