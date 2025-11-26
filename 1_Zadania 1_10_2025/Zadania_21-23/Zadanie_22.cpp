#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector<int>& tab) {
    int n = tab.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tab[j] > tab[j + 1]) {
                swap(tab[j], tab[j + 1]);
            }
        }
    }
}


int main() {
    int h,m;
    cout << "ile liczb?";
    cin >> h;
    vector<int> blica(h);

    cout << "Podaj swoje liczby nacisjakac enter po kazdej"<<endl;
    for (int i = 0; i < h; ++i) {
        cin >> blica[i];
    }

    int n = sizeof(blica) / sizeof(blica[0]);

    bubble_sort(blica);
    for (int i = 0; i < blica.size(); ++i) {
        cout << blica[i] << " ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}