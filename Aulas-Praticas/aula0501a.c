/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0501a.c

$Author: lucasqueiroz $
$Date: 2020/09/24 08:18:40 $
$Log: aula0501a.c,v $
Revision 1.1  2020/09/24 08:18:40  lucasqueiroz
Initial revision

*/

#include "aula0401.h"
#include "aula0501.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int input){
    if (input == 0){
        return 0;
    }
    if (input == 1){
        return 1;
    }
    if ((input%2)==0){
        return (CalcularSerieHarmonicaAlternada(input-1)-(1/(float)CalcularExponencial(input,input)));
    }
    return (CalcularSerieHarmonicaAlternada(input-1)+(1/(float)CalcularExponencial(input,input)));
}

/*$RCSfile: aula0501a.c,v $*/