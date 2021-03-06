/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0603a.c

$Author: lucasqueiroz $
$Date: 2020/10/08 20:36:01 $
$Log: aula0603a.c,v $
Revision 1.1  2020/10/08 20:36:01  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0601.h"

#define NUMERO_ARGUMENTOS                               12
#define EOS                                             '\0'

#define OK                                              0
#define NUMERO_ARGUMENTOS_INVALIDO                      1
#define CARACTERE_INVALIDO                              2
#define OPERACAO_INVALIDA                               3

int main (int argc, char *argv[]){
    char *validacao;
    unsigned indice, verify;
    byte pisPasep[11];

    if(argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: <inteiro1> <inteiro2> ... <inteiro10> \n",argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    for(indice=1;indice<12;indice++){
        if(strlen(argv[indice])!=1){
            printf("Uso %s: somente um caractere\n",argv[0]);
        }
        pisPasep[indice-1]= (byte) strtoul(argv[indice], &validacao,10);
        if(*validacao != EOS){
            printf("Caractere invalido, programa aceita somente numeros\n");
            exit (CARACTERE_INVALIDO);
        }
    }
    verify = ValidarPisPasep(pisPasep);
    if (verify == 0){
        printf("Digito Verificador Valido.\n");
    } else {
        printf("Digito Verificador Invalido.\n");
        exit(OPERACAO_INVALIDA);
    }
    return OK;
}

/*$RCSfile: aula0603a.c,v $*/