/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0801.c

$Author$
$Date$
$Log$
*/
#include <stdio.h>
#include <stdlib.h>

#include "aula08.h"

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida){
    unsigned mod_table[3] = {0, 2, 1};
    unsigned lenVal = 4*((numeroBytes+2)/3);
    unsigned *length = &lenVal;
    unsigned index,equalChar=0,lastEqualChar=0;

    if (saida == NULL) return tamanhoNulo;
    for (int index = 0, j = 0; index < numeroBytes;) {
        unsigned octeto_a = index < numeroBytes ? (unsigned char)entrada[index++] : 0;
        unsigned octeto_b = index < numeroBytes ? (unsigned char)entrada[index++] : 0;
        unsigned octeto_c = index < numeroBytes ? (unsigned char)entrada[index++] : 0;
        unsigned triple = (octeto_a << 0x10) + (octeto_b << 0x08) + octeto_c;
        saida[j++] = CONJUNTO_BASE_64[(triple >> 3 * 6) & 0x3F];
        saida[j++] = CONJUNTO_BASE_64[(triple >> 2 * 6) & 0x3F];
        saida[j++] = CONJUNTO_BASE_64[(triple >> 1 * 6) & 0x3F];
        saida[j++] = CONJUNTO_BASE_64[(triple >> 0 * 6) & 0x3F];
    }
    for (int index = 0; index < mod_table[numeroBytes % 3]; index++){
        saida[*length - 1 - index] = '=';
    }
    for(index=0;lastEqualChar==0;index++){
        if(saida[index] == '=') {
            equalChar++;
        }
        if((saida[index] != '=') && (equalChar > 0)){
            saida[index] = '\0';
            lastEqualChar++;
        }
    }
    printf("%s\n",saida);
    return ok;
}

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes){
    
    return 0;
}

/*$RCSfile$*/