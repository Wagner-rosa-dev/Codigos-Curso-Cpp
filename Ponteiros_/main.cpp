#include <iostream>

using namespace std;

int main()
{
    int a = 10; // Variavel Primitiva Comum
    int* pa = &a; // Variavel Ponteiro apontando para o endereço de "a"

    cout << "size(a): " << sizeof(a) << endl; // Tamanho de "a" - Espaço ocupado na memória
    cout << "a: " << a << endl; // Valor dentro da variável "a"
    cout << "&a: " << &a << endl; // O endereço de "a"

    cout << "\nsize(pa): " << sizeof(pa) << endl; // O tamanho do Ponteiro - Espaço Ocupado na memória
    cout << "pa: " << pa << endl; // O Valor dentro do ponteiro
    cout << "*pa: " << *pa << endl; // O valor que o ponteiro está apontando
    cout << "&pa: " << &pa << endl; // O endereço do ponteiro

    *pa = 80; //Mudando o valor do Ponteiro de "a" muda tambem o valor da varivavel original, ou a variavel para aonde o ponteiro aponta

    cout << "\nsize(a): " << sizeof(a) << endl; // Tamanho de "a" - Espaço ocupado na memória
    cout << "a: " << a << endl; // Valor dentro da variável "a"
    cout << "&a: " << &a << endl; // O endereço de "a"

    a = 20; // Mudando o valor da variavel original tambem se muda o valor do Ponteiro

    cout << "\nsize(pa): " << sizeof(pa) << endl; // O tamanho do Ponteiro - Espaço Ocupado na memória
    cout << "pa: " << pa << endl; // O Valor dentro do ponteiro
    cout << "*pa: " << *pa << endl; // O valor que o ponteiro está apontando
    cout << "&pa: " << &pa << endl; // O endereço do ponteiro


    //Outra forma de atribuição do endereço da variavel ao ponteiro é
    int b = 10;
    int* pb = nullptr; // assim se passa o valor nullo para um ponteiro

    pb = &b; // assim fica a atribuição do endereço de "b" para o Ponteiro de "b"


    return 0;
}
