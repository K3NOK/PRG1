#include <iostream> 
using namespace std;

// Funkcja zamieniająca wartości wskazywane przez wskaźniki
void zamienJesliMniejsza(int* ptr1, int* ptr2) {
    // Sprawdzamy czy wartość wskazywana przez ptr2 jest mniejsza od wartości wskazywanej przez ptr1
    if (*ptr2 < *ptr1) {
        // Jeśli tak, zamieniamy wartości
        int temp = *ptr1;  // Zapisujemy wartość z pierwszej zmiennej do zmiennej tymczasowej
        *ptr1 = *ptr2;     // Przypisujemy wartość z drugiej zmiennej do pierwszej
        *ptr2 = temp;      // Przypisujemy wartość tymczasową do drugiej zmiennej
    }
    // Jeśli warunek nie jest spełniony, nic nie robimy
}

// Funkcja główna - testowanie
int main() {
    // Przykład 1: Zamiana nastąpi (5 < 10)
    int a = 10;
    int b = 5;
    
    cout << "Przed zamiana: a = " << a << ", b = " << b << endl;
    zamienJesliMniejsza(&a, &b);
    cout << "Po zamianie: a = " << a << ", b = " << b << endl;
    cout << endl;
    
    // Przykład 2: Zamiana NIE nastąpi (15 > 3)
    int c = 3;
    int d = 15;
    
    cout << "Przed zamiana: c = " << c << ", d = " << d << endl;
    zamienJesliMniejsza(&c, &d);
    cout << "Po zamianie: c = " << c << ", d = " << d << endl;
    cout << endl;
    
    // Przykład 3: Zamiana NIE nastąpi (7 == 7)
    int e = 7;
    int f = 7;
    
    cout << "Przed zamiana: e = " << e << ", f = " << f << endl;
    zamienJesliMniejsza(&e, &f);
    cout << "Po zamianie: e = " << e << ", f = " << f << endl;
    
    return 0;
}