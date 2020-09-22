/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0502.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0501.h"

#define OK                              0
#define NUMERO_ARGUMENTOS               2
#define NUMERO_ARGUMENTOS_INVALIDO      1
#define ARGUMENTO_INVALIDO              2
#define EOS                             '\0'

int
main (int argc, char *argv[]){
    char *validate;
    unsigned long input;

    if (argc != NUMERO_ARGUMENTOS){
        printf("Uso: %s <inteiro> \n", argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    if (argv[1][0] == '-'){
        printf("Argumento contem caractere invalido: - \n");
    }
    input = strtoul (argv[1], &validate,10);
    if (*validate != EOS){
        printf("Argumento contem caractere invalido: %c!!!\n", *validate);
        exit(ARGUMENTO_INVALIDO);
    }
    printf("\tS$(%lu)=%.10f\n", input, CalcularSerieHarmonicaAlternada(input));

    return OK;
}


/*$RCSfile$*/