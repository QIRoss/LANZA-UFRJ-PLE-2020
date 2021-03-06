/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0701.h

$Author: lucasqueiroz $
$Date: 2020/10/08 20:24:59 $
$Log: aula0701.h,v $
Revision 1.1  2020/10/08 20:24:59  lucasqueiroz
Initial revision

*/

#ifndef _AULA0701_
#define _AULA0701_                  "@(#)aula0701.h $Revision: 1.1 $"

#define DIMENSAO_LINHA_ESQ                  5
#define DIMENSAO_COLUNA_ESQ                 3
#define DIMENSAO_LINHA_DIR                  3
#define DIMENSAO_COLUNA_DIR                 4

typedef enum{ok} tipoErros;

tipoErros
MultiplicarMatrizes (float [5][3], float [3][4], float [5][4]);

#endif

/* $RCSfile: aula0701.h,v $ */