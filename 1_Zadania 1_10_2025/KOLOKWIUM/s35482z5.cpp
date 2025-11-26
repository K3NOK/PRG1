#include<iostream>
using namespace std;

int main(){
int n,i,tmp,m,pierczynie;
string tmmp,max;
cout<<"podaj liczbe elementow w tablicy: ";
cin>>n;
int tablica[n];
tmp=0;
pierczynie =0;
tmmp="";
max="";
for (i=0;i<n;i++){
    cout <<"podaj "<< i+1 << " element: ";
    cin>> tablica[i];
}
for (i=0;i<n;i++){
    if (tablica[i]>=tablica[i-1]){
        tmp+=1;
        if (pierczynie = 0){
            tmmp+=tablica[i-1];
        }
        tmmp+=tablica[i];
        pierczynie+=1;
        if (tmmp.length()>max.length()){
            max = tmmp;
        }
    }else{
        tmp=0;
        tmmp="";
    }
    //cout<<tmp<<endl;
}


//cout<<tmmp;
cout<<max<<endl;

system("pause");
return 0;
}