/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0401b.c

$Author: lucasqueiroz $
$Date: 2020/09/15 20:03:01 $
$Log: aula0401b.c,v $
Revision 1.1  2020/09/15 20:03:01  lucasqueiroz
Initial revision

*/

#include "aula0401.h"
#include "math.h"

long double
CalcularExponencial (double base, int expoente){
    double result = 1;
    if (expoente == 0){
        return 1;
    }
    if ((base == 0) && (expoente < 0)){
        return (INFINITY);
    }
    if (expoente > 0){
        do {
            result*=base;
            expoente--;
        } while (expoente > 0);
        return result;
    }
    do {
            result*=1/base;
            expoente++;
        } while (expoente < 0);
        return result;
}

/* $RCSfile: aula0401b.c,v $ */