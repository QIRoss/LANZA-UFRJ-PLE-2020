/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0805.c

$Author: lucasqueiroz $
$Date: 2020/10/27 05:52:27 $
$Log: aula0805.c,v $
Revision 1.1  2020/10/27 05:52:27  lucasqueiroz
Initial revision

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

    ConverterArquivoFormatoUnixFormatoDos(argv[1],argv[2]);
    return OK;
}

/*$RCSfile: aula0805.c,v $*/