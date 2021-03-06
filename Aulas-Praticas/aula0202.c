/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0202.c

$Author: lucasqueiroz $
$Date: 2020/09/03 04:13:06 $
$Log: aula0202.c,v $
Revision 1.2  2020/09/03 04:13:06  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/09/02 22:32:33  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0201.h"

#define OK                              0
#define NUMERO_ARGUMENTOS_INVALIDO      1
#define ARGUMENTO_INVALIDO              2
#define NUMERO_ARGUMENTOS               3
#define EOS                             '\0'
#define MDC_ZERO_E_ZERO                 4

int
main (int argc, char *argv[]){
    unsigned long long numeroUm, numeroDois;
    char *validacao, *validacao2;
    if (argc != NUMERO_ARGUMENTOS){
        printf ("Uso: %s <inteiro-nao-negativo> <inteiro-nao-negativo>\n", argv[0]);
        exit (NUMERO_ARGUMENTOS_INVALIDO);
    }

    numeroUm = strtoull(argv[1], &validacao, 10);
    if (*validacao != EOS){
        printf("Caractere invalido: \'%c\'\n", *validacao);
        exit (ARGUMENTO_INVALIDO);
    }

    numeroDois = strtoull(argv[2], &validacao2, 10);
    if (*validacao2 != EOS){
        printf("Caractere invalido: \'%c\'\n", *validacao2);
        exit (ARGUMENTO_INVALIDO);
    }
    
    if ((CalcularMaximoDivisorComum ( numeroUm, numeroDois)) == 0){
        printf("Nao ha MDC de zero e zero\n");
        exit (MDC_ZERO_E_ZERO);
    }
    printf ("\nMDC %s e %s!: %llu\n\n", argv[1], argv[2],CalcularMaximoDivisorComum(numeroUm,numeroDois));
}

/*$RCSfile: aula0202.c,v $*/