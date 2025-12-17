#include <iostream>
using namespace std;


int* no_clue(){
    int* ptr = new int;
    return ptr;
}



int main(){
    int* call = no_clue();
    delete call;
    return 0;
}