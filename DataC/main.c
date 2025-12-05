#include <stdio.h>

struct DATA{

    int dia;
    int mes;
    int ano;
    int valid;
};

struct DATA initDATA(){
    struct DATA dt;
    dt.valid = 0;
    return dt;
};

struct DATA changeDATA(struct DATA dt, int dia, int mes, int ano){
    dt.dia = dia;
    dt.mes = mes;
    dt.ano = ano;

    if ((dt.dia >= 1 && dt.dia <= 31) &&
        (dt.mes >= 1 && dt.mes <= 12) &&
        (dt.ano >= 1900 && dt.ano <= 2100)){
        dt.valid = 1;
    }
    else {
      dt.valid = 0;
    }
    return dt;
}

void printDATA(struct DATA dt){
    if (dt.valid){
      printf("%02d/%02d/%d\n", dt.dia, dt.mes, dt.ano);
}   else {
      printf("Data invalida!\n");
}
}

int main()
{
    struct DATA pgt = initDATA();

    pgt = changeDATA(pgt, 1, 10, 2024);

    printDATA(pgt);
    printf("Size: %zu\n", sizeof(pgt));



    return 0;
}
