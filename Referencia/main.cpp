#include <iostream>

using namespace std;

int main()
{
    int a = 10; // Variavel Primitiva Comum
    int &ra = a; // Variavel Ponteiro apontando para o endereço de "a"

    cout << "size(a): " << sizeof(a) << endl; // Tamanho de "a" - Espaço ocupado na memória
    cout << "a: " << a << endl; // Valor dentro da variável "a"
    cout << "&a: " << &a << endl; // O endereço de "a"

    cout << "\nsize(pa): " << sizeof(ra) << endl; // O tamanho do Ponteiro - Espaço Ocupado na memória
    cout << "pa: " << ra << endl; // O Valor dentro do ponteiro
    cout << "&pa: " << &ra << endl; // O endereço do ponteiro



    return 0;
}
