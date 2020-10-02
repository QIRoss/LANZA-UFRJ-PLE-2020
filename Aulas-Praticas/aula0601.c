/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0601.c

$Author$
$Date$
$Log$
*/

#include "aula0601.h"

tipoErros
GerarDigitoVerificadorPisPasep(byte pisPasep[11]){
    byte pesos[10]={3,2,4,8,7,6,5,4,3,2};
    unsigned indice=0,resultado=0;
    for(indice=0; indice<10;indice++){
        if (pisPasep[indice] > 9){
            return erroMaiorQueDez;
        }
        resultado+= pisPasep[indice]*pesos[indice];
    }
    resultado=resultado%11;
    if (resultado == 0 || resultado == 1){
        pisPasep[10] = 0;
        return ok;
    }
    else {
        pisPasep[10] = 11 - resultado;
        return ok;
    }
}

tipoErros
ValidarPisPasep (byte pisPasep[11]){
    byte digito = pisPasep[10];
    GerarDigitoVerificadorPisPasep(pisPasep);
    if(digito == pisPasep[10]){
        return ok;
    }
    return erroDigitoVerificadorInvalido;
}


/*$RCSfile$*/