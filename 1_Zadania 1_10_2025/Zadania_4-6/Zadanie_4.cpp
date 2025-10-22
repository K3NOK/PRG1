#include <iostream>

using namespace std;

int main(){
    char symbol;
    cout << "Podaj symbol jakiego ASCII chcesz poznać: " << endl;
    cin >> symbol;
    cout << "kod ASCII symbolu to:" << int(symbol) << endl;

    return 0;
}