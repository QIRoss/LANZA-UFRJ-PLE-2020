/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0201b.c
$Author: lucasqueiroz $
$Date: 2020/09/02 22:31:46 $
$Log: aula0201b.c,v $
Revision 1.1  2020/09/02 22:31:46  lucasqueiroz
Initial revision

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
    do {
        resto = x % y;
        x = y;
        y = resto;
    } while (resto != 0);
    return x;
}

/*$RCSfile: aula0201b.c,v $*/