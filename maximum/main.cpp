#include <iostream>

using namespace std;

inline int maximum(int a, int b){
    //Operador Ternário
    return a > b ? a : b;
}

int main()
{
    int a = 10, b = 20;

    cout << (a > b ? a : b) << endl;

    a = 50;
    b = 10;

    cout << (a > b ? a : b) << endl;

    return 0;
}
