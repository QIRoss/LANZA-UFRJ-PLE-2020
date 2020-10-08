/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0704.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0703.h"

#ifdef __linux__
#define _XOPEN_SOURCE 600
#include <unistd.h>
#undef _XOPEN_SOURCE
#endif

#ifdef __FreeBSD__
#include <unistd.h>
#endif

#define OK                                          0
#define NUMERO_ARGUMENTOS                           9+1
#define NUMERO_ARGUMENTOS_INVALIDO                  1
#define CARACTERE_INVALIDO                          2
#define ABSCISSA_INVALIDA                           3
#define ORDENADA_INVALIDA                           4
#define EOS                                         '\0'

int main (int argc, char *argv[]){
    unsigned strings, indice;
    unsigned variaveis[9];
    char *validacao;
    unsigned verify=0;
    // useconds_t tempo;

    tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];

    if (argc != NUMERO_ARGUMENTOS){
        printf("Uso %s: <MaximoLinhas> <MaximoColunas> <yEsquerdo> <xEsquerdo> <yDireito> <xDireito> <yPonto> <xPonto> <Tempo>\n\n", argv[0]);
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }
    for (strings = 1; strings < NUMERO_ARGUMENTOS; strings++){
        if (argv[strings][0] == '-'){
            printf("Programa aceita somente inteiros nao negativos\n");
            exit(CARACTERE_INVALIDO);
        }
    }
    for(indice=0; indice < (NUMERO_ARGUMENTOS-1); indice++){
        variaveis[indice] = strtoul(argv[indice+1], &validacao, 10);
        if(*validacao != EOS){
            printf("Programa aceita somente inteiros nao negativos\n");
            exit(CARACTERE_INVALIDO);
        }
        printf("Variaveis[%u] = %u\n",indice, variaveis[indice]);
    }
    if(variaveis[0] > NUMERO_MAXIMO_LINHAS){
        printf("Numero maximo de linhas: %i\n", NUMERO_MAXIMO_LINHAS);
        exit (ABSCISSA_INVALIDA);
    }
    if(variaveis[1] > NUMERO_MAXIMO_COLUNAS){
        printf("Numero maximo de colunas: %i\n", NUMERO_MAXIMO_COLUNAS);
        exit (ORDENADA_INVALIDA);
    }

    // tempo = (useconds_t) variaveis[8];
    verify = LimparMonitor(monitor, variaveis[0], variaveis[1],1);
    verify = DesenharRetangulo(monitor, variaveis[0], variaveis[1], variaveis[2], variaveis[3], variaveis[4], verify = variaveis[5],1);
    verify = MostrarMonitor(monitor, variaveis[0], variaveis[1],1);
    verify = PreencherPoligono(monitor, variaveis[0], variaveis[1],variaveis[6]-1,variaveis[7]-1, 1);
    return OK;
}
/* $RCSfile$ */