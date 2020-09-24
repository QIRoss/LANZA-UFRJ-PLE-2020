/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0501e.c

$Author$
$Date$
$Log$
*/

#include "aula0401.h"
#include "aula0501.h"
#include <math.h>

float
CalcularSerieHarmonicaAlternada (unsigned long int input){
    if (input == 0){
        return 0;
    }
    if (input == 1){
        return 1;
    }
        if ((input%2)==0){
            return -((1/pow(input,input))) + (CalcularSerieHarmonicaAlternada(input-1));
        } 
        return (1/pow(input,input)) + (CalcularSerieHarmonicaAlternada(input-1));
}

/*$RCSfile$*/