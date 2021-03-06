/*

Universidade Federal do Rio de Janeiro

Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0102.c

$Author: lucasqueiroz $
$Date: 2020/08/25 18:11:24 $
$Log

*/

#include <stdio.h>

int main(int argc,char *argv[]) {
    printf("\'Tipos Basicos:\'\n\n");
    printf("void\n\t\t\t%lu%s\n",sizeof(void),sizeof(void) > 1 ? "bytes": "byte");
    printf("char\n\t\t\t%lu%s\n",sizeof(char),sizeof(char) > 1 ? "bytes": "byte");
    printf("int\n\t\t\t%lu%s\n",sizeof(int),sizeof(int) > 1 ? "bytes": "byte");
    printf("float\n\t\t\t%lu%s\n",sizeof(float),sizeof(float) > 1 ? "bytes": "byte");
    printf("double\n\t\t\t%lu%s\n\n",sizeof(double),sizeof(double) > 1 ? "bytes": "byte");
    return 0;
}

/*$RCSfile: aula0102.c,v $*/