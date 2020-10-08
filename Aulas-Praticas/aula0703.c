/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0703.c

$Author$
$Date$
$Log$
*/

#include "aula0703.h"

#include <stdio.h>
#include <unistd.h>

tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera){
    unsigned indiceLinha, indiceColuna;
    if (numeroMaximoLinhas > NUMERO_MAXIMO_LINHAS){
        return(abscissaInvalida);
    } 
    if (numeroMaximoColunas > NUMERO_MAXIMO_COLUNAS){
        return(ordenadaInvalida);
    }
    for(indiceLinha=0;indiceLinha<numeroMaximoLinhas;indiceLinha++){
        for(indiceColuna=0;indiceColuna<numeroMaximoColunas;indiceColuna++){
            printf("%c", (monitor[indiceLinha][indiceColuna] == aceso)? ACESO: APAGADO );
        }
        printf("\n");
    }
    sleep(1);
    return ok;
}

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera){
    unsigned indiceLinha, indiceColuna;

    if(numeroMaximoLinhas > NUMERO_MAXIMO_LINHAS){
        return abscissaInvalida;
    }
    if(numeroMaximoColunas > NUMERO_MAXIMO_COLUNAS){
        return ordenadaInvalida;
    }
    for(indiceLinha=0;indiceLinha < numeroMaximoLinhas; indiceLinha++){
        for(indiceColuna=0; indiceColuna < numeroMaximoColunas; indiceColuna++){
            monitor[indiceLinha][indiceColuna] = apagado;
        }
    }
    return MostrarMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);
}

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linhaCantoSuperior, unsigned colunaCantoSuperior, unsigned linhaCantoInferior, unsigned colunaCantoInferior, useconds_t tempoEspera){
    unsigned indiceLinha, indiceColuna;
    for(indiceLinha = /**/; indiceLinha < /**/; indiceLinha++){

    }
    for(indiceColuna = /**/; indiceColuna < /**/; indiceColuna++){
        
    }
    return ok;
}

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linha, unsigned coluna, useconds_t tempoEspera){
    if(monitor[linha][coluna] == aceso){
        return ok;
    }
    monitor[linha][coluna] = aceso;
    MostrarMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);
    PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha-1,coluna, tempoEspera);
    PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha, coluna-1, tempoEspera);
    PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha, coluna+1, tempoEspera);
    PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha+1, coluna, tempoEspera);
    return ok;
}

/* $RCSfile$ */