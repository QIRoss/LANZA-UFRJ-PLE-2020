/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0501c.c

$Author$
$Date$
$Log$
*/

#include "aula0401.h"
#include "aula0501.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int input){
    float resultado = 1;
    if (input == 0){
        return 0;
    }
    if (input == 1){
        return 1;
    }
    for(;input>1;input--){
        if ((input%2)==0){
            resultado -= 1/(float)(CalcularExponencial(input,input));
        } 
        if ((input%2==1)){
            resultado += 1/(float)(CalcularExponencial(input,input));
        }
    }
    return resultado;
}

/*$RCSfile$*/