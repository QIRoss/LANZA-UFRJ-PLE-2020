/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0702.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>

#include "aula0701.h"


#define OK                              0
#define EOS                             '\0'
#define NUMERO_ARGUMENTOS               28

#define DIMENSAO_LINHA_ESQ                  5
#define DIMENSAO_COLUNA_ESQ                 3
#define DIMENSAO_LINHA_DIR                  3
#define DIMENSAO_COLUNA_DIR                 4

#define ARGUMENTO_INVALIDO              1
#define NUMERO_ARGUMENTOS_INVALIDO      2
#define ERRO_MULTIPLICANDO_MATRIZES     3

int main (int argc, char *argv[]){
    tipoErros check;
    char *validacao;
    unsigned indexArgs=0, indexI=0, indexJ=0;
    float mLeft[DIMENSAO_LINHA_ESQ][DIMENSAO_COLUNA_ESQ], 
    mRight[DIMENSAO_LINHA_DIR][DIMENSAO_COLUNA_DIR], 
    mRes[DIMENSAO_LINHA_ESQ][DIMENSAO_COLUNA_DIR];

    if (argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: 27 argumentos que sejam numeros reais, formando a[5][3] e b[3][4]\n",argv[0]);
        exit (NUMERO_ARGUMENTOS_INVALIDO);
    }

    for(indexArgs = 1;indexArgs < NUMERO_ARGUMENTOS;indexArgs++){
        if (indexArgs < 16){
            for(indexI = 0; indexI < DIMENSAO_LINHA_ESQ; indexI++){
                for(indexJ = 0; indexJ < DIMENSAO_COLUNA_ESQ; indexJ++){
                    mLeft[indexI][indexJ] = strtof(argv[indexArgs],*validacao);
                    if (*validacao != EOS){
                        printf("Argumento Invalido, caractere encontrado %c\n", *validacao);
                        exit(ARGUMENTO_INVALIDO);
                    }
                }
            }
        } else {
            for(indexI = 0; indexI < DIMENSAO_LINHA_DIR; indexI++){
                for(indexJ = 0; indexJ < DIMENSAO_COLUNA_DIR; indexJ++){
                    mRight[indexI][indexJ] = strtof(argv[indexArgs],*validacao);
                    if (*validacao != EOS){
                        printf("Argumento Invalido, caractere encontrado %c\n", *validacao);
                        exit(ARGUMENTO_INVALIDO);
                    }
                }
            }
        }
    }

    check = MultiplicarMatrizes(mLeft, mRight, mRes);
    if (check != 0){
        printf("Erro na multiplicacao das matrizes\n");
        exit(ERRO_MULTIPLICANDO_MATRIZES);
    }

    for(;;){}

    
    return OK;
}

/* $RCSfile$ */