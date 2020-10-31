 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCheckNickname.c

$Author: lucasqueiroz $
$Date: 2020/10/30 23:58:23 $
$Log: umlTestCheckNickname.c,v $
Revision 1.1  2020/10/30 23:58:23  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    size_t minSize=0;
    size_t maxSize=0;
    char *validate;
    umlErrorType verify;
    if(UML_TEST_NICKNAME_ARGC != argc){
        printf(
            "Use %s: <string> <valid chars set> <min length> <max length> \n",
            argv[0]);
        exit(UML_INVALID_ARGC);
    }
    minSize = (size_t) strtoul(argv[3],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    maxSize= (size_t) strtoul(argv[4],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    verify = UmlCheckNickname(
        argv[1],argv[2],
        UML_CHECK_NICKNAME_MIN_LENGTH,UML_CHECK_NICKNAME_MAX_LENGTH);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile: umlTestCheckNickname.c,v $*/