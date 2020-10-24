/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0801.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula08.h"

#define OK                                          0


int main(int argc,char *argv[]){
    byte data_to_encode[] = "Base64";
    unsigned bytes_to_encode = strlen((const char *) data_to_encode);
    char valorDaSaida;
    char *saida = &valorDaSaida;
    tipoErros resultado = CodificarBase64(data_to_encode,bytes_to_encode,saida);
    printf("%d\n",resultado);
}

/*$RCSfile$*/