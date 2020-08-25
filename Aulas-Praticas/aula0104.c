/*

Universidade Federal do Rio de Janeiro

Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0104.c

$Author: lucasqueiroz $
$Date: 2020/08/25 18:12:00 $
$Log

*/

#include <stdio.h>

int main(int argc,char *argv[]) {
    unsigned index;

    printf("\'Tipos Basicos:\'\n\n");
    printf("void\n\t\t\t%lu%s\n",sizeof(void),sizeof(void) > 1 ? "bytes": "byte");
    printf("char\n\t\t\t%lu%s\n",sizeof(char),sizeof(char) > 1 ? "bytes": "byte");
    printf("int\n\t\t\t%lu%s\n",sizeof(int),sizeof(int) > 1 ? "bytes": "byte");
    printf("float\n\t\t\t%lu%s\n",sizeof(float),sizeof(float) > 1 ? "bytes": "byte");
    printf("double\n\t\t\t%lu%s\n\n",sizeof(double),sizeof(double) > 1 ? "bytes": "byte");

    for(index=0;index<80;index++){
        printf("-");
    }

    printf("\n\'Modificadores de Sinal:\'\n\n");
    printf("unsigned\t\t%lu%s\n",sizeof(unsigned),sizeof(unsigned) > 1 ? "bytes": "byte");
    printf("signed\n\t\t\t%lu%s\n\n",sizeof(signed),sizeof(signed) > 1 ? "bytes": "byte");
    
    for(index=0;index<80;index++){
        printf("-");
    }

    printf("\n\'Modificadores de Largura:\'\n\n");
    printf("short\n\t\t\t%lu%s\n",sizeof(short),sizeof(short) > 1 ? "bytes": "byte");
    printf("long\n\t\t\t%lu%s\n",sizeof(long),sizeof(long) > 1 ? "bytes": "byte");
    printf("long long\n\t\t\t%lu%s\n\n",sizeof(long long),sizeof(long long) > 1 ? "bytes": "byte");

    for(index=0;index<80;index++){
        printf("-");
    }

    printf("\n\'Modificadores de Sinal combinados com os Modificadores de Largura:\'\n\n");
    printf("unsigned short\n\t\t\t%lu%s\n",sizeof(unsigned short),sizeof(unsigned short) > 1 ? "bytes": "byte");
    printf("signed short\n\t\t\t%lu%s\n",sizeof(signed short),sizeof(signed short) > 1 ? "bytes": "byte");
    printf("unsigned long\n\t\t\t%lu%s\n",sizeof(unsigned long),sizeof(unsigned long) > 1 ? "bytes": "byte");
    printf("signed long\n\t\t\t%lu%s\n",sizeof(signed long),sizeof(signed long) > 1 ? "bytes": "byte");
    printf("unsigned long long\n\t\t\t%lu%s\n",sizeof(unsigned long long),sizeof(unsigned long long) > 1 ? "bytes": "byte");
    printf("signed long long\n\t\t\t%lu%s\n\n",sizeof(signed long long),sizeof(signed long long) > 1 ? "bytes": "byte");
    
    return 0;
}

/*$RCSfile: aula0104.c,v $*/