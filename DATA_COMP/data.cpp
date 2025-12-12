#include "data.h"



void DATA::change(short dia, short mes, short ano) {
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;

    validate();
}

void DATA::print() const {
    if (m_valid){
        printf("%02d/%02d/%d\n", m_dia, m_mes, m_ano);
        isLeapYear() ? printf("Esse ano é bissexto!!\n") : printf("Esse ano não é bissexto!!\n");
    }   else {
        printf("Data inválida\n");
    }
}

short DATA::lastDayOfMonth() const{
/*
    if(m_mes == FEVEREIRO){
        //return isLeapYear() ? 29 : 28; essa tambem daria certo

        //return 30 + isLeapYear();
        // somando com o valor bool ele pode dar: true ou false - seria a mesma coisa que: 1 ou 0
        // assim se true(1) seria: 30 + 1 = 31
        // ou se false(0) seria: 30 + 0 = 30
    }
    return m_mes <= JULHO ? 30 + (m_mes & 1) : 31 - (m_mes & 1);
*/
    return m_mes != FEVEREIRO ?
            (30 + ((m_mes & 1) ^ (m_mes > JULHO))) :
            (28 + isLeapYear());
    //nesse exemplo na primeira condição se utiliza o valor lógico xor ou "^"

}

bool DATA::isLeapYear() const
{
    int res3 = m_ano % 400;
    int res1 = m_ano & 3;
    int res2 = m_ano % 100;

    if (res3 == 0 || (res1 == 0 && res2 != 0))
        return true;


    return false;
}




