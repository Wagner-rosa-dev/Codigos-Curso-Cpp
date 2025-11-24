#include <iostream>

/* Aula de Loops
 * 1. for
 * 2. while
 * 3. do while
 *
 * 4. goto - Princial
 */



using namespace std;

int main() {

    const string pass("HER");

    for (char a = 'A'; a <= 'Z'; ++a){
        for (char b = 'A'; b <= 'Z'; ++b){
            for (char c = 'A'; c <= 'Z'; ++c){
                const string tempPass({a, b, c});
                cout << tempPass << endl;
                if (tempPass == pass){
                    cout << "\n\n\nPassWord found: " << tempPass << "\n\n\n";
                    goto END; // aqui serve como uma marcação que quando a senha comparada for igual a senha encontrada inves de colocar varios breaks para sair de todos os for
                              // eu coloco uma marca para ele ir assim que achar
                }
            }
        }
    }
    END:


    return 0;
}
