 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCreateNickname.c

$Author: lucasqueiroz $
$Date: 2020/10/31 20:59:59 $
$Log: umlTestCreateNickname.c,v $
Revision 1.1  2020/10/31 20:59:59  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    char initOne,initTwo;
    char *outputOne = &initOne;
    char *outputTwo = &initTwo;
    umlErrorType verify;
    if(UML_TEST_CREATE_NICKNAME_ARGC != argc){
        printf("Use %s: <full name> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    outputOne = (char *) malloc(UML_NICKNAME_MAX_LENGTH);
    outputTwo = (char *) malloc(UML_NICKNAME_MAX_LENGTH);
    verify = UmlCreateNickname(argv[1],outputOne,outputTwo);
    printf("Option one: %s\nOption two: %s\n",outputOne,outputTwo);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile: umlTestCreateNickname.c,v $*/