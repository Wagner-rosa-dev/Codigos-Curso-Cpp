#include <iostream>

using namespace std;

int main()
{
    int a = 10; // Variavel Primitiva Comum
    int &ra = a; // Variavel referenica dando um novo apelido para "a"

    cout << "size(a): " << sizeof(a) << endl; // Tamanho de "a" - Espaço ocupado na memória
    cout << "a: " << a << endl; // Valor dentro da variável "a"
    cout << "&a: " << &a << endl; // O endereço de "a"

    cout << "\nsize(pa): " << sizeof(ra) << endl; // O tamanho da referencia - Espaço Ocupado na memória
    cout << "pa: " << ra << endl; // O Valor dentro da referencia
    cout << "&pa: " << &ra << endl; // O endereço da referencia



    return 0;
}
