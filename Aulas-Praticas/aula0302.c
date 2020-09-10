/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020-4/PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0302.c

$Author: lucasqueiroz $
$Date: 2020/09/10 06:08:17 $
$Log: aula0302.c,v $
Revision 1.1  2020/09/10 06:08:17  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0301.h"

#define OK                              0
#define NUMERO_ARGUMENTOS               2

#define NUMERO_ARGUMENTOS_INVALIDO      1
#define ARGUMENTO_INVALIDO              2
#define EOS                             '\0'

int main (int argc, char *argv[]){
    char *validate;
    unsigned long long result;
    unsigned short input,index;

    if (argc != NUMERO_ARGUMENTOS){
        printf("Uso: %s <inteiro nao negativo>\n",argv[0]);
        exit (NUMERO_ARGUMENTOS_INVALIDO);

    }
    if (argv[1][0] == '-'){
        printf("Argumento contem caractere invalido: '-' !!!\n");
        exit(ARGUMENTO_INVALIDO);
    }

    input = (unsigned short) strtoul(argv[1],&validate, 10);

    if(*validate != EOS){
        printf ("Argumento contem caractere(s) invalido(s): %c !!!\n",*validate);
        exit(ARGUMENTO_INVALIDO);
    }
    for(index=0;index<input+1;index++){
        result = (unsigned long long) CalcularTermoSerieFibonacci(index);
        printf("F(%hu)=%llu\n",index,result);
    }
    return OK;
}

/* $RCSfile: aula0302.c,v $ */