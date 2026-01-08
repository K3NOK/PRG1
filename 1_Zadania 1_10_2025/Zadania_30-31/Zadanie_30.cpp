#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int sto = 100;

void czyt_dane(int A[], int &n) {
    int a, b;
    cout << "Podaj rozmiar tablicy (max 100): ";
    cin >> n;
    
    if (n > sto || n <= 0) {
        cout << "Nie" << endl;
        n = 0;
        return;
    }
    
    cout << "Podaj zakres [a, b]: ";
    cin >> a >> b;
    if (b > a){
        swap(a,b);
    }
    srand(time(0));
    for (int i = 0; i < n; i++) {
        A[i] = a + rand() % (b - a + 1);
    }
}

void pisz_tab(int A[], int n) {
    cout << "Tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

float srednia(int A[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += A[i];
    }
    return (float)suma / n;
}

int ile(int A[], int n) {
    int element, licznik = 0;
    cout << "Podaj element do sprawdzenia: ";
    cin >> element;
    
    for (int i = 0; i < n; i++) {
        if (A[i] == element) {
            licznik++;
        }
    }
    return licznik;
}

int nieparzyste(int A[], int n) {
    int liczba = 0, suma = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            liczba++;
            suma += A[i];
        }
    }
    cout << "Suma nieparzystych: " << suma << endl;
    return liczba;
}

int min(int A[], int n) {
    int minwar = A[0];
    int minIdx = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] < minwar) {
            minwar = A[i];
            minIdx = i;
        }
    }
    cout << "Indeks minimalnego: " << minIdx << endl;
    return minwar;
}

int max(int A[], int n) {
    int maxwar = A[0];
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > maxwar) {
            maxwar = A[i];
            maxIdx = i;
        }
    }
    cout << "Indeks maksymalnego: " << maxIdx << endl;
    return maxwar;
}

void sasiednie(int A[], int n) {
    if (n < 2) {
        cout << "Za malo elementow!" << endl;
        return;
    }
    
    int maxsuma = A[0] + A[1];
    int idx = 0;
    
    for (int i = 1; i < n - 1; i++) {
        int suma = A[i] + A[i + 1];
        if (suma > maxsuma) {
            maxsuma = suma;
            idx = i;
        }
    }
    
    cout << "Para sasiadow o najwiekszej sumie: A[" << idx << "]=" << A[idx] << " i A[" << idx + 1 << "]=" << A[idx + 1] << ", suma: " << maxsuma << endl;
}

int najczestszy(int A[], int n) {
    int maxelement = A[0];
    int maxlicznik = 1;
    
    for (int i = 0; i < n; i++) {
        int licznik = 0;
        for (int j = 0; j < n; j++) {
            if (A[j] == A[i]) {
                licznik++;
            }
        }
        if (licznik > maxlicznik) {
            maxlicznik = licznik;
            maxelement = A[i];
        }
    }
    
    cout << "Wystepuje " << maxlicznik << " razy" << endl;
    return maxelement;
}

void przestawianie(int A[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }
}

void kopiowanie(int A[], int B[], int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
}

int main() {
    int A[sto], B[sto];
    int n;
    czyt_dane(A, n);
    pisz_tab(A, n);
    
    cout << "Srednia: " << srednia(A, n) << endl;
    cout << "Liczba wystapien: " << ile(A, n) << endl;
    cout << "Liczba nieparzystych: " << nieparzyste(A, n) << endl;
    cout << "Element minimalny: " << min(A, n) << endl;
    cout << "Element maksymalny: " << max(A, n) << endl;
    sasiednie(A, n);
    cout << "Najczesciej wystepujacy: " << najczestszy(A, n) << endl;
    przestawianie(A, n);
    cout << "Po przestawieniu: ";
    pisz_tab(A, n);
    kopiowanie(A, B, n);
    cout << "Skopiowana tablica: ";
    pisz_tab(B, n);
    //system("pause");
    return 0;
}