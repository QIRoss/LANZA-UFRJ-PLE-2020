/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0801.c

$Author: lucasqueiroz $
$Date: 2020/10/27 05:51:37 $
$Log: aula0801.c,v $
Revision 1.1  2020/10/27 05:51:37  lucasqueiroz
Initial revision

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return ok;
}

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned numeroBytes){
    unsigned sexteto_a, sexteto_b, sexteto_c, sexteto_d, triple;
    char *tabelaReversa = malloc(256);
    for (int index = 0; index < 64; index++){
        tabelaReversa[(byte) CONJUNTO_BASE_64[index]] = index;
    }
    if (numeroBytes % 4 != 0) return tamanhoNulo;
    unsigned output_length = (numeroBytes / 4 * 3);
    
    if (saida == NULL) return tamanhoNulo;

    for (int index = 0, j = 0; index < numeroBytes;) {
        sexteto_a = entrada[index] == '=' ? 0 & index++ : tabelaReversa[(unsigned) entrada[index++]];
        sexteto_b = entrada[index] == '=' ? 0 & index++ : tabelaReversa[(unsigned) entrada[index++]];
        sexteto_c = entrada[index] == '=' ? 0 & index++ : tabelaReversa[(unsigned) entrada[index++]];
        sexteto_d = entrada[index] == '=' ? 0 & index++ : tabelaReversa[(unsigned) entrada[index++]];
        triple = (sexteto_a << 3 * 6)+(sexteto_b << 2 * 6)+(sexteto_c << 1 * 6)+(sexteto_d << 0 * 6);
        if (j < output_length) saida[j++] = (triple >> 2 * 8) & 0xFF;
        if (j < output_length) saida[j++] = (triple >> 1 * 8) & 0xFF;
        if (j < output_length) saida[j++] = (triple >> 0 * 8) & 0xFF;
    }
    free(tabelaReversa);
    return ok;
}

/*$RCSfile: aula0801.c,v $*/