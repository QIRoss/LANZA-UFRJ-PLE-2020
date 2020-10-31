 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCheckNickname.c

$Author: lucasqueiroz $
$Date: 2020/10/31 20:59:41 $
$Log: umlTestCheckNickname.c,v $
Revision 1.3  2020/10/31 20:59:41  lucasqueiroz
*** empty log message ***

Revision 1.2  2020/10/31 20:02:13  lucasqueiroz
*** empty log message ***

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
    umlErrorType verify;
    if(UML_TEST_NICKNAME_ARGC != argc){
        printf(
            "Use %s: <string> <valid chars set>\n",
            argv[0]);
        exit(UML_INVALID_ARGC);
    }
    verify = UmlCheckNickname(
        argv[1],argv[2],
        UML_NICKNAME_MIN_LENGTH,UML_NICKNAME_MAX_LENGTH);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile: umlTestCheckNickname.c,v $*/