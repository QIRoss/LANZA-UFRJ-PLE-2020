/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0501b.c

$Author: lucasqueiroz $
$Date: 2020/09/24 08:19:16 $
$Log: aula0501b.c,v $
Revision 1.1  2020/09/24 08:19:16  lucasqueiroz
Initial revision

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
    do {
        if ((input%2)==0){
            resultado -= 1/(float)(CalcularExponencial(input,input));
        } 
        if ((input%2==1)){
            resultado += 1/(float)(CalcularExponencial(input,input));
        }
        input--;
    }while(input > 1);
    return resultado;
}

/*$RCSfile: aula0501b.c,v $*/