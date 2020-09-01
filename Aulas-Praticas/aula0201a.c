/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II -  Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0201a.c

$Author$
$Date$
$Log$
*/

#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull x, ull y) {
    if (x == 0 && y == 0)
        return 0;
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    if ((x%y) == 0)
        return y;
    return (CalcularMaximoDivisorComum (y,x%y));
}

/*$RCSfile$*/