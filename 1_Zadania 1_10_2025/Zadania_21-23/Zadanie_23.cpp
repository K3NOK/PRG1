#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;
    int tablica1[100][100];
    int tablica2[100][100];
    int tblica_z_wynikiem[100][100];
    cout<<"prosze kolejno podac wartosci a, b, c, d. po kazdej potwiedzic naciskajac enter."<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a<0||b<0||c<0||d<0||a!=c||c!=d){
        cout<<"BLAD";
        return 0;
    }
//wczytywanie wartosci podanych macierzy po wierszach (chyba)
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout<<"podaj "<< j+1<< " wartosc z "<<i+1<<" rzedu macierzy axb"<<endl;
            cin>>tablica1[i][j];
        }
    }
    for (int i=0;i<c;i++){
        for (int j=0;j<d;j++){
            cout<<"podaj "<< j+1<< " wartosc z "<<i+1<<" rzedu macierzy cxd"<<endl;
            cin>>tablica2[i][j];
        }
    }
//-------dodawanie i wynik
    cout<<endl<<"wynik to:"<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            tblica_z_wynikiem[i][j] = tablica1[i][j]+tablica2[i][j];
            cout<< tblica_z_wynikiem[i][j]<<" ";
        }
        cout<<endl;
    }





    system("pause");
    return 0;
}