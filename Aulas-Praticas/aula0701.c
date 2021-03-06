/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0701.c

$Author: lucasqueiroz $
$Date: 2020/10/08 20:25:12 $
$Log: aula0701.c,v $
Revision 1.1  2020/10/08 20:25:12  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include "aula0701.h"

tipoErros
MultiplicarMatrizes (
    float mLeft[DIMENSAO_LINHA_ESQ][DIMENSAO_COLUNA_ESQ], 
    float mRight[DIMENSAO_LINHA_DIR][DIMENSAO_COLUNA_DIR], 
    float mRes[DIMENSAO_LINHA_ESQ][DIMENSAO_COLUNA_DIR]
    ){

    unsigned indexI=0, indexJ=0, indexK=0;

    for(indexI=0;indexI < DIMENSAO_LINHA_ESQ; indexI++){
        for(indexJ=0;indexJ < DIMENSAO_COLUNA_DIR; indexJ++){
            mRes[indexI][indexJ] = 0;
        }
    }

    for(indexI=0;indexI < DIMENSAO_LINHA_ESQ;indexI++){
        for(indexJ=0; indexJ < DIMENSAO_COLUNA_DIR;indexJ++){
            for(indexK=0; indexK < DIMENSAO_COLUNA_ESQ; indexK++){
                mRes[indexI][indexJ] = mRes[indexI][indexJ] + (mLeft[indexI][indexK])*(mRight[indexK][indexJ]);
            }
        }
    }
    return ok;
}

/* $RCSfile: aula0701.c,v $ */