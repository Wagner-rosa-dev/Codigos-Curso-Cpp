#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

//Aqui foi passado o maior valor de uma variavel int como uint64_t para comportar qualquer tamanho de retorno ou entrada
//O uso do size_t dentro do for seria para o mesmo proposito sendo uma declaração de um inteiro porém nao definido
//para comportar qualquer tamanho em "i"

//Passagem por Ponteiro
uint64_t sumP(std::vector<int> *vec){
    if (!vec){
        return 0;
    }

    uint64_t total = 0;
    for (size_t i = 0, size = vec->size(); i < size; ++i){
        total += vec->operator[](i);
    }

    return total;
}

//Passagem por referencia
uint64_t sumR(std::vector<int> &vec){
    uint64_t total = 0;
    for (size_t i = 0, size = vec.size(); i < size; ++i){
        total += vec[i];
    }

    return total;
}


int main()
{
    std::vector<int> vec;
    vec.resize(1'000'000); //passando 1 milhão de elemento dentro de vec ou seja 4 milhoes de bytes

    for (size_t i = 0; i < vec.size(); ++i){
        vec[i] = i;
    }

    //cout << sum(&vec) << endl;// Passasem por ponteiro
    cout << sumR(vec) << endl;
    return 0;
}
