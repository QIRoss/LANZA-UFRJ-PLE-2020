 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestGetCryptAlgorithm .c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crypt.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    umlCryptAlgorithms initOne;
    char initTwo;
    umlCryptAlgorithms *algoType = &initOne;
    char *salt = &initTwo;
    umlErrorType verify;
    if(UML_TEST_GET_CRYPT_ALGO_ARGC != argc){
        printf("Use %s: <full name> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    algoType = (umlCryptAlgorithms *) malloc(10);
    salt = (char *) malloc(2);
    verify = UmlGetCryptAlgorithm(argv[1],algoType,salt);
    if(verify == umlOk){
        printf("Algo Type: %s\nSalt: %s\n",algoType,salt);
    }
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile$*/