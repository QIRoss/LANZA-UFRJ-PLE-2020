 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCreateRandomString.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    size_t length=0;
    char *validate;
    char init;
    char *output = &init;
    umlErrorType verify;
    if(UML_TEST_CREATE_RANDOM_STRING_ARGC != argc){
        printf("Use %s: <valid chars set> <length> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    length= (size_t) strtoul(argv[2],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    output = (char *) malloc(length);
    verify = UmlCreateRandomString(argv[1],length,output);
    printf("%s\n",output);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile$*/