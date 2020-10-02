/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0605a.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0604.h"

#define NUMERO_ARGUMENTOS                               11
#define EOS                                             '\0'

#define OK                                              0
#define NUMERO_ARGUMENTOS_INVALIDO                      1
#define CARACTERE_INVALIDO                              2
#define OPERACAO_INVALIDA                               3

int main (int argc, char *argv[]){
    char *validacao;
    unsigned indice, verify;
    char *pisPasep;
    char *digitoVerificador;
    
    if(argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: <inteiro1> <inteiro2> ... <inteiro10> \n",argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    for(indice=1;indice<11;indice++){
        if(strlen(argv[indice])!=1){
            printf("Uso %s: somente um caractere\n",argv[0]);
        }
        pisPasep[indice-1]= (char) (argv[indice][0] - '0');
        printf("%c\t\n",pisPasep[indice-1]);
        if(*validacao != EOS){
            printf("Caractere invalido, programa aceita somente numeros\n");
            exit (CARACTERE_INVALIDO);
        }
    }
    printf("ARRIVED\n");
    verify = GerarDigitoVerificadorPisPasep(&pisPasep, &digitoVerificador);
    if (verify == 0){
        printf("Digito Verificador: %c\n",*digitoVerificador);
    } else {
        printf("Operação invalida\n");
        exit(OPERACAO_INVALIDA);
    }
    return OK;
}

/*$RCSfile$*/