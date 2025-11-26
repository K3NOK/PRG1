#include<iostream>
using namespace std;

int main(){
string a;
int i,ilejedynek,tmplicz,dlugosc;
cout << "prosze podac ciag 0,1: ";
cin >>a;
a+="01";
//ilejedynek = 0;
int tablica[dlugosc];
tmplicz=0;
dlugosc = 0;
for(i =0;i<a.length();i++){
    if (a[i] == '1'){
        //ilejedynek+=1;
        tmplicz+=1;
    }else if (a[i] =='0'){
        if (tmplicz>0){
            tablica[dlugosc]=tmplicz;
            dlugosc+=1;
            tmplicz=0;
        }
    }
}
for (i = 0;i<dlugosc;i++){
    cout<<tablica[i];
}


    cout<<endl;
    system("pause");
    return 0;
}