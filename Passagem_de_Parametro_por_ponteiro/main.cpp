#include <iostream>
#include <limits>

using namespace std;

bool readInt(int *value){
    if (value == nullptr)
        return false;

    cin >> *value;
    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        return false;
    }
    return true;
}

int main(){

    int v = 0;

    cout << "Type number: " << endl;
    if(!readInt(&v)){
        cout << "Invalid input!\n";
    } else {
        cout << "The Number is: " << v << endl;
    }



    return 0;
}

/*  Nesse Código diferente de seu antecessor consegue modificar o valor dentro da função
 *  nesse caso por conta do uso dos Ponteiros e endereços eu consigo modificar a variavel
 *  original e não apenas uma cópia
 *
 */
