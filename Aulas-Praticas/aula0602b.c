/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0602b.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0601.h"

#define NUMERO_ARGUMENTOS                               2
#define EOS                                             '\0'

#define OK                                              0
#define NUMERO_ARGUMENTOS_INVALIDO                      1
#define NUMERO_CARACTERES_INVALIDO                      4
#define CARACTERE_INVALIDO                              2
#define OPERACAO_INVALIDA                               3

int main (int argc, char *argv[]){
    unsigned indice, verify;
    byte pisPasep[11];

    if(argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: <10caracteres inteiros> \n",argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    if(strlen(argv[1])>10){
        printf ("Uso %s: <10caracteres inteiro>\n", argv[0]);
        exit (NUMERO_CARACTERES_INVALIDO);
    }
    for(indice=0;indice<10;indice++){
        pisPasep[indice] = (byte) argv[1][indice] - '0';
        if(pisPasep[indice] > 9 || pisPasep[indice] < 0){
            printf("Caractere Invalido, programa aceita somente numeros\n");
            exit (CARACTERE_INVALIDO);
        }
    }
    verify = GerarDigitoVerificadorPisPasep(pisPasep);
    if (verify == 0){
        printf("Digito Verificador: %u\n",pisPasep[10]);
    } else {
        printf("Operação invalida\n");
        exit(OPERACAO_INVALIDA);
    }
    return OK;
}

/*$RCSfile$*/