#include <iostream>
#include <limits>

using namespace std;

int main(){
    int nota1 = 0, nota2 = 0, media = 0;

    cout << "Qual foi a sua primeira nota: ";
    cin >> nota1;

    if (cin.fail()){
        cin.clear(); // Limpa as flags de erro
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpa o buffer
    }

    cout << "Qual foi a sua segunda nota: ";
    cin >> nota2;

    if (cin.fail()){
        cin.clear(); // Limpa as flags de erro
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpa o buffer
    }

    media = (nota1 + nota2) / 2;

    cout << "A sua média foi: " << media << endl;

    if (media >= 6){
        cout << "Parabéns Você passou!!!" << endl;
    } else {
        cout << "Lamento, você não passou" << endl;
    }


    return 0;
}
