/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020-4/PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0301a.c

$Author: lucasqueiroz $
$Date: 2020/09/10 06:07:28 $
$Log: aula0301a.c,v $
Revision 1.1  2020/09/10 06:07:28  lucasqueiroz
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
        return (CalcularTermoSerieFibonacci(input-1) + CalcularTermoSerieFibonacci(input-2) );
    }
}

/* $RCSfile: aula0301a.c,v $ */