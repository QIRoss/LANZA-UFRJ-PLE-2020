/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0806.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula08.h"

#define OK                                      0
#define NUMERO_ARGUMENTOS                       2

#define NUMERO_ARGUMENTOS_INVALIDO              1

int main(int argc,char *argv[]){

    if(!(argc == NUMERO_ARGUMENTOS || argc == NUMERO_ARGUMENTOS+1)){
        printf("Uso %s: <Argumento a ser lido> <Argumento opcional de destino>\n",argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }

    ConverterArquivoFormatoDosFormatoUnix(argv[1],argv[2]);
    return OK;
}

/*$RCSfile$*/