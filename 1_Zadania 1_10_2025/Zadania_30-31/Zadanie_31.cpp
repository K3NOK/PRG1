#include<iostream>
using namespace std;


void sort_quick(int A[], int &n) {
    int pivot = A[n / 2];
    int lewa = 0;
    int prawa = n - 1;
    
    while (lewa <= prawa) {
        while (A[lewa] < pivot) lewa++;
        while (A[prawa] > pivot) prawa--;
        if (lewa <= prawa) {
            swap(A[lewa], A[prawa]);
            lewa++;
            prawa--;
        }
    }
    if (prawa > 0) {
        int lsize = prawa + 1;
        sort_quick(A, lsize);
    }
    if (lewa < n) {
        int rsize = n - lewa;
        sort_quick(A + lewa, rsize);
    }
}

int main(){
    int n;
    cout << "podaj liczbe elementow: ";
    cin >> n;

    int A[n];
    cout << "podaj elementy tablicy: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort_quick(A, n);

    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}