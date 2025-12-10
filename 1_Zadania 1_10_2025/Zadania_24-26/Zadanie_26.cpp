#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    int n;
    cout << "Podaj ile elementow ma miec tablica: ";
    cin >> n;
    
    int* tab = new int[n];
    
    // normalnie 
    auto start1 = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        tab[i] = i + 50;
    }
    auto end1 = high_resolution_clock::now();
    
    //pntrs
    auto start2 = high_resolution_clock::now();
    int* ptr = tab;
    for (int i = 0; i < n; i++) {
        *ptr++ = i + 50;
    }
    auto end2 = high_resolution_clock::now();
    
    //tajm set
    auto tajm1 = duration_cast<nanoseconds>(end1 - start1).count();
    auto tajm2 = duration_cast<nanoseconds>(end2 - start2).count();
    
    cout << "Indeksy: " << tajm1 << " ns\n";
    cout << "Wskazniki: " << tajm2 << " ns\n";
    
    delete[] tab;
    return 0;
}
