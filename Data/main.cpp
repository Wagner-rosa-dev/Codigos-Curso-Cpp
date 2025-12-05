#include <stdio.h>

/*
 * Os problemas de estar tentando simular a POO em C é:
 * 1. Não há como forçar a inicialização
 *
 * 2. Todas as Propriedades da struct são públicas, o que quer dizer que em
 * qualquer lugar do main voce pode alterar um valor da sua struct o que pode
 * causar problemas no futuro - Ok
 *
 * 3. As funções são todas como outras quaisquer, funções globais!!! - Ok
 * 4. Ficar repetindo a palavra reservada Struct - Ok
 * 5. Usar referencias ao invés de endereços - Ok
 * 6. Valid como short ao invés de bool - Ok
 */


struct DATA{
/* toda função/metodos do struct recebe o DATA *this, apesar de nao ser visivel
 * o comentario representa como está para o compilador, esse this é o compilador
 * o responsável por colocado ali
 */

public: // Possibilita que qualquer um acesse esses metodos
    void init(/*DATA *this*/){

        m_valid = false;
    };

    void change(/*DATA *this, */int dia, int mes, int ano) /* dentro das chaves é o parametro */{
        m_dia = dia;
        m_mes = mes;
        m_ano = ano;

        if ((m_dia >= 1 && m_dia <= 31) &&
            (m_mes >= 1 && m_mes <= 12) &&
            (m_ano >= 1900 && m_ano <= 2100)){
            m_valid = true;
        }
        else {
            m_valid = false;
        }
    }

    void print(/*DATA *this*/) const {
        if (m_valid){
            printf("%02d/%02d/%d\n", m_dia, m_mes, m_ano);
        }   else {
            printf("Data invalida!\n");
        }
    }

private: //Possibilita que apenas os metodos do struct acessem e mais ninguem
    //tambem chamados de propriedades -  e colocar um prefixo como m_ para identificar como membro
    short m_dia;
    short m_mes;
    short m_ano;
    bool m_valid;
};

int main()
{

    DATA pgt;
    pgt.init();
    pgt.change(1, 1, 2025);
    pgt.print();

    printf("size: %zu\n", sizeof(pgt));


    return 0;
}
