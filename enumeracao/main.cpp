#include <iostream>
#include <cstdint>

using namespace std;

// Em caso de constantes que tenham alguma relação sempre pensar em agrupa-las em um enum clássicos como esse:
enum Months {
    Janeiro = 1, //Aqui eu passo o valor de 1 porque o anum começa com a primeira posição em 0, assim como o for
    Fevereiro,
    Março,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};



/* Os problemas desse enum Clássico são:
 * 1) Caso tenha outro enum de nome diferente aonde se repita o nome de alguma variavel ele retorna um erro.
 *
 * 2) O tamanho dele é sempre inteiro ou seja 4bytes o que é um desperdicio de memória se voce nao tiver
 * uma lista que ocupe 4 bytes.
 *
 * 3) Com o enum dessa forma não podemos pontua de qual enum está vindo a variavel const
 *
 * Abaixo esta um enum que resolve todos esses problemas:
 *
 */

enum class meses : uint8_t {
    Janeiro = 1, //Aqui eu passo o valor de 1 porque o anum começa com a primeira posição em 0, assim como o for
    Fevereiro,
    Março,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};

/* Com esse novo enum agora voce resolve os problemas descritos acima, só pontuando:
 *
 * class: resolve o problema de não poder repetir o nome da constante declarada, se o enum tiver nome diferente,
 * porém o nome da constante for igual, nesse caso nao terá problemas.
 * Outro problema que resolve é você poder identificar a qual enum aquela constante pertence
 *
 * * uint8_t: limita a quantidade de espaço na memória o enum vai consumir economizando e muito a quantidade
 * de memória desperdiçada - nesse caso gasta 1byte somente, por ser uint8_t vai de 0 a 255
 * se o valor, por exemplo, de dezembro fosse na posição 256 e adianta ele daria overflow e voltaria a
 * primeira posição
 *
 */


int main()
{
    meses mesatual = meses::Dezembro;

    cout << sizeof(meses) << endl; // comando para verficiar o tamanho do enum, quanto de memória esta consumindo

    cout << "Number: " << static_cast<int>(mesatual) << endl; // mostrar em qual posição no enum está o valor chamado
    // peculiaridade sobre essa chamada no comentário do segundo enum, o enum "completo" *

    if (mesatual == meses::Janeiro){
        cout << "Janeiro" << endl;
    } else if (mesatual == meses::Fevereiro) {
        cout << "Fevereiro" << endl;
    } else if (mesatual == meses::Março) {
        cout << "março" << endl;
    } else if (mesatual == meses::Abril) {
        cout << "Abril" << endl;
    } else if (mesatual == meses::Maio) {
        cout << "maio" << endl;
    } else if (mesatual == meses::Junho) {
        cout << "junho" << endl;
    } else if (mesatual == meses::Julho) {
        cout << "julho" << endl;
    } else if (mesatual == meses::Agosto) {
        cout << "agosto" << endl;
    } else if (mesatual == meses::Setembro) {
        cout << "setembro" << endl;
    } else if (mesatual == meses::Outubro) {
        cout << "outubro" << endl;
    } else if (mesatual == meses::Novembro) {
        cout << "novembro" << endl;
    } else if (mesatual == meses::Dezembro) {
        cout << "dezembro" << endl;
    }
}
