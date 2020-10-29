 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestGetWebErrorMessage.c

$Author: lucasqueiroz $
$Date: 2020/10/29 22:33:31 $
$Log: umlTestGetWebErrorMessage.c,v $
Revision 1.1  2020/10/29 22:33:31  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>

#include "umlConst.h"
#include "umlErrors.h"
#include "umlTypes.h"

#define ARGUMENT_COUNT              3
#define ARGUMENT_NUMBERS_INVALID    1
#define INVALID_ARGUMENT            2
#define NO_ERROR_FOUND              3

int main(int argc,char *argv[]){
    unsigned error=0;
    unsigned language=0;
    char *validate;
    if(ARGUMENT_COUNT != argc){
        printf("Use %s: \n",argv[0]);
        exit(ARGUMENT_NUMBERS_INVALID);
    }
    error= (unsigned) strtoul(argv[1],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(INVALID_ARGUMENT);
    }
    language= (unsigned) strtoul(argv[2],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(INVALID_ARGUMENT);
    }
    validate  = UmlGetCliErrorMessage(error,language);
    if(validate == NULL){
        printf("Error code does not exist.\n");
        exit(NO_ERROR_FOUND);
    }
    printf("%s\n",UmlGetWebErrorMessage(error,language));
    return UML_OK;
}

/*$RCSfile: umlTestGetWebErrorMessage.c,v $*/