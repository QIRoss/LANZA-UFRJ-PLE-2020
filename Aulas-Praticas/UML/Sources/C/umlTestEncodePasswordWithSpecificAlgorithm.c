 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestEncodePasswordWithSpecificAlgorithm.c

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
    umlCryptAlgorithms algoType;
    umlErrorType verify;
    char output[100];
    char *validate;
    if(UML_TEST_SPECIFIC_ALGO_ARGC != argc){
        printf("Use %s: <password to be converted> <algoType enum> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    algoType = (umlCryptAlgorithms) strtoul(argv[2],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    verify = UmlEncodePasswordWithSpecificAlgorithm(argv[1],algoType,output);
    printf("%s\n",output);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile$*/