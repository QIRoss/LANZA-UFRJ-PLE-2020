/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0802.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula08.h"

#define OK                                          0

#define MINIMO_ARGUMENTOS                           3
#define EOS                                         '\0'

#define NUMERO_ARGUMENTOS_INVALIDO                  1
#define ARGUMENTO_INVALIDO                          2
#define CARACTERE_INVALIDO                          3
#define ERRO_ENCODE_DECODE                          4

int main(int argc,char *argv[]){
    unsigned numeroBytes,inputLen,index,byteLoader=0;
    tipoErros verify;
    char *validacao,*saida;
    char valorDaSaida;

    if(argc < MINIMO_ARGUMENTOS){
        printf("Uso %s: <n Bytes> <n Argumentos Byte>\n",argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    numeroBytes = (unsigned) strtol(argv[1],&validacao,10);
    if (*validacao != EOS){
        printf("Argumento <n Bytes> Invalido\n");
        exit(ARGUMENTO_INVALIDO);
    }
    if (argc != (numeroBytes+2)){
        printf("Numero de argumentos não condiz com o primeiro argumento <n Bytes>\n");
        exit(ARGUMENTO_INVALIDO);
    }
    byte input[2*numeroBytes];
    *saida = &valorDaSaida;
    for(index = 2;index<argc;index++){
        if(!((argv[index][0] >= 'A' && argv[index][0] <= 'Z') ||
        (argv[index][0] >= 'a' && argv[index][0] <= 'z') || 
        (argv[index][0] >= '0' && argv[index][0] <= '9') || 
        (argv[index][0] == '+') ||
        (argv[index][0] == '/'))){
            printf("CARACTERE NAO CONDIZ COM BASE64\n");
            exit(CARACTERE_INVALIDO);
        } else {
            input[byteLoader++] = argv[index][0];
            input[byteLoader++] = argv[index][1];
        }
    }
    input[byteLoader]=EOS;
    inputLen = strlen((const char *) input);
    verify = CodificarBase64(input,inputLen,saida);
    if(verify != 0){
        printf("ERRO AO CODIFICAR BASE64!\n");
        exit(ERRO_ENCODE_DECODE);
    }
    printf("%s\n",saida);
    return OK;
}

/*$RCSfile$*/