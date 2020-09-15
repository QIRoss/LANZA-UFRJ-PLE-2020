/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0401a.c

$Author$
$Date$
$Log$
*/
#include <stdio.h>
#include <stdlib.h>
#include "aula0401.h"

#define NUMERO_ARGUMENTOS                   3
#define EOS                                 '\0'

#define OK                                  0
#define NUMERO_ARGUMENTOS_INVALIDO          1
#define ARGUMENTO_INVALIDO                  2

int
main(int argc, char *argv[]){
    char *validate1,*validate2;
    double base;
    int expoente;

    if(argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: <racional> <inteiro> \n",argv[0]);
        return (NUMERO_ARGUMENTOS_INVALIDO);
    }
    base = strtod(argv[1],&validate1);
    expoente = (int) strtol(argv[2],&validate2,10);
    if(*validate1 != EOS){
        printf ("Argumento <base> contem caractere(s) invalido(s): %c !!!\n",*validate1);
        exit(ARGUMENTO_INVALIDO);
    }
    if(*validate2 != EOS){
        printf ("Argumento <expoente> contem caractere(s) invalido(s): %c !!!\n",*validate2);
        exit(ARGUMENTO_INVALIDO);
    }
    printf("Potencia de Base %f e %i : \t %Lf\n",base,expoente,CalcularExponencial(base,expoente));
    return OK;
}
/* $RCSfile$ */