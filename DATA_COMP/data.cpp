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
        isLeapYear(m_ano) ? printf("Esse ano é bissexto!!\n") : printf("Esse ano não é bissexto!!\n");
    }   else {
        printf("Data inválida\n");
    }
}

short DATA::lastDayOfMonth() const
{
    return 31;
}

bool DATA::isLeapYear(short ano) const
{
    int res3 = ano % 400;
    int res1 = ano % 4;
    int res2 = ano % 100;

    if (res3 == 0 || (res1 == 0 && res2 != 0)){
        return true;
    }

    return false;
}


