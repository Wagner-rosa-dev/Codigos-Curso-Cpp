#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Implementação simples de vetor -------------------------------------------------------------------------------------
    /* Esses vetores mais simples tem um limite do quão grande pode ser seu indice
     * Esses vetores não podem ser mudados dinâmicamente, seus valores uma vez declarados no indice são fixo
     */
    //O tamanho de um vetor sempre será: tamanho de um inteiro + quantidade de indices([n])
    int vec_teste1[3]; // nesse caso seria 4 x 3 = 12bytes / sendo o primeiro 4 o tamanho de um inteiro e 10 o numero do indice

    vec_teste1[0] = 0;
    vec_teste1[1] = 1;
    vec_teste1[2] = 2;
    //vec[3] = 3; // se voce tenta acessar um valor fora do indice seu aplicação pode desde crash até
                // um comportamento nao definido, por exemplo alterar variaveis em outra aplicação

    //cout << sizeof(vec) << endl;

    for (int i = 0; i < 3; ++i){
        //cout << vec_teste1[i] << endl;
    }
    // ----------------------------------------------------------------------------------------------------------------------

    //Implementação com a biblioteca vector
    //nesse caso o vetor aqui pode sim ser redimensionado
    std::vector<int> vec_test2;

    //no momento que eu quiser eu posso adicionar novos elementos
    vec_test2.push_back(0);// O(1) aqui ele ainda não alugou nenhuma memoria a mais
    vec_test2.push_back(1);// A partir daqui ele ja aluga duas memorias a frente, contando com essa
    vec_test2.push_back(2);// nesta terceira linha ele considera ja usando os dois espaços de memoria usado então ele a partir daqui aluga mais quatro espaços na memoria

    //Resultando assim no uso de memoria de 24bytes sendo: 6bytes(espaço de memoria alugado pelo push.back) x 4bytes = 24bytes sendo usados
    // cout << sizeof(vec) << endl;
    for(int i = 0; i < vec_test2.size(); ++i){
       // cout << vec[i] << endl;
    }
    //O problema de usar desse forma com o "push_back" é que ele quando cria um novo elemento ele sempre aluga o dobro do que ele precisou
    //E o tempo de execução após o primeiro elemento O(1) é sempre muito grande se comparado a solução logo abaixo
    // -----------------------------------------------------------------------------------------------------------------------------------------

    //Para resolver o Problema do push.back acima podemos usar outras funções como:
    std::vector<int> vec;
    vec.reserve(4); // Passando esse parametro os elementos sempre serão chamados no tempo de O(1)

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);


    cout << sizeof(vec) << endl;
    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }
    return 0;
}
