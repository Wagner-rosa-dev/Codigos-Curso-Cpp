#include <iostream>

using namespace std;

void maximum(int value){

    value = 10;
    cout << "Value: " << value << endl;
}

int main(){
    int v = 100;
    cout << "Before v: " << v << endl;
    maximum(v);
    cout << "After v: " << v << endl;
    return 0;
}

/*  Nesse caso aqui eu estou exemplificando a passagem de parâmetro para
 *  uma cópia da variável.
 *  Quando o valor é modificado dentro da função após sua chamada e o codigo retorna
 *  para o main o valor modificado permanece somente dentro da função
 *  Isso é passagem de parâmetro por cópia
 */
