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

#define OK                              0

int main(int argc,char *argv[]){
    ConverterArquivoFormatoDosFormatoUnix("destination.txt","destinationInv.txt");
    return OK;
}

/*$RCSfile$*/