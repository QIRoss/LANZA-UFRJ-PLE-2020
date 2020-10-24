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
    int mod_table[3] = {0, 2, 1};

    *saida = 4*((numeroBytes+2)/3);

    char *encoded_data = malloc(sizeof(*saida));

    if (encoded_data == NULL) return tamanhoNulo;

    for (int i = 0, j = 0; i < numeroBytes;) {
        unsigned octeto_a = i < numeroBytes ? (unsigned char)entrada[i++] : 0;
        unsigned octeto_b = i < numeroBytes ? (unsigned char)entrada[i++] : 0;
        unsigned octeto_c = i < numeroBytes ? (unsigned char)entrada[i++] : 0;
        unsigned triple = (octeto_a << 0x10) + (octeto_b << 0x08) + octeto_c;
        encoded_data[j++] = CONJUNTO_BASE_64[(triple >> 3 * 6) & 0x3F];
        encoded_data[j++] = CONJUNTO_BASE_64[(triple >> 2 * 6) & 0x3F];
        encoded_data[j++] = CONJUNTO_BASE_64[(triple >> 1 * 6) & 0x3F];
        encoded_data[j++] = CONJUNTO_BASE_64[(triple >> 0 * 6) & 0x3F];
    }

    for (int i = 0; i < mod_table[numeroBytes % 3]; i++){
        encoded_data[*saida - 1 - i] = '=';
    }
    printf("%s\n",encoded_data);

    return ok;
}

#include "aula08.h"

/*$RCSfile$*/