 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestEncodePasswordWithSpecificSalt.c

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
    char init;
    char *umlHash = &init;
    unsigned long vak = 100;
    umlErrorType verify;
    if(UML_TEST_SPECIFIC_SALT_ARGC != argc){
        printf("Use %s: <valid chars set> <salt> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    umlHash = (char *) malloc((size_t) vak);
    verify = UmlEncodePasswordWithSpecificSalt(argv[1],argv[2],umlHash);
    printf("%s\n",umlHash);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile$*/