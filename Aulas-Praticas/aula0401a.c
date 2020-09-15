/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0401a.c

$Author$
$Date$
$Log$
*/

#include "aula0401.h"
#include "math.h"

long double
CalcularExponencial (double base, int expoente){
    if (expoente == 0){
        return 1;
    }
    if ((base == 0) && (expoente < 0)){
        return (INFINITY);
    }
    if (expoente > 0){
        return base*(CalcularExponencial(base,expoente-1));
    }
    return (1/base)*(CalcularExponencial(base,expoente+1));
}

/* $RCSfile$ */