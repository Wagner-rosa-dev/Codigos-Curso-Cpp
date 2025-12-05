#include <stdio.h>
#include <stdint.h>

/*
 * Os problemas de estar tentando simular a POO em C é:
 * 1. Não há como forçar a inicialização
 * 2. Todas as Propriedades da struct são públicas, o que quer dizer que em
 * qualquer lugar do main voce pode alterar um valor da sua struct o que pode
 * causar problemas no futuro
 * 3. As funções são todas como outras quaisquer, funções globais!!!
 */

struct DATA{
    short dia;
    short mes;
    short ano;
    short valid;
};

void initDATA(struct DATA *dt){

    dt->valid = 0;
};

void changeDATA(struct DATA *dt, int dia, int mes, int ano){
    dt->dia = dia;
    dt->mes = mes;
    dt->ano = ano;

    if ((dt->dia >= 1 && dt->dia <= 31) &&
        (dt->mes >= 1 && dt->mes <= 12) &&
        (dt->ano >= 1900 && dt->ano <= 2100)){
        dt->valid = 1;
    }
    else {
      dt->valid = 0;
    }
}

void printDATA(const struct DATA *dt){
    if (dt->valid){
      printf("%02d/%02d/%d\n", dt->dia, dt->mes, dt->ano);
}   else {
      printf("Data invalida!\n");
}
}

int main()
{
    struct DATA pgt;
    initDATA(&pgt);

    changeDATA(&pgt, 1, 15, 2025);
    pgt.valid = 1;

    printDATA(&pgt);

    printf("size: %zu\n", sizeof(pgt));


    return 0;
}
