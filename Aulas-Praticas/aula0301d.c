/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020-4/PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0301d.c

$Author: lucasqueiroz $
$Date: 2020/09/10 06:08:07 $
$Log: aula0301d.c,v $
Revision 1.1  2020/09/10 06:08:07  lucasqueiroz
Initial revision

*/

#include "aula0301.h"

unsigned long long
CalcularTermoSerieFibonacci(unsigned short input){
    if (input == 0)
        return 0;
    if (input == 1)
        return 1;
   else {
        unsigned short auxiliar1,auxiliar2,auxiliar3,indice;
        auxiliar2=0;
        auxiliar3=1;
        indice=1;
        while(indice<input) {
            auxiliar1=auxiliar2+auxiliar3;
            auxiliar2=auxiliar3;
            auxiliar3=auxiliar1;
            indice++;
        } 
    return auxiliar1;
    }
}

/* $RCSfile: aula0301d.c,v $ */