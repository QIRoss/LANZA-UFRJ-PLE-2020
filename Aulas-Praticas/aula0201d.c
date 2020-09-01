/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2019/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0201d.c

$Author$
$Date$
$Log$
*/

#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull x, ull y) {
    ull resto;
    if (x == 0 && y == 0)
        return 0;
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    while(resto!=0){
        resto = x % y;
        x = y;
        y = resto;
    }
    return x;
}

/*$RCSfile$*/