 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCheckPassword.c
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
    umlErrorType verify;
    if(UML_TEST_CHECK_PASSWORD_ARGC != argc){
        printf("Use %s: <plain password> <hash> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    verify = UmlCheckPassword("a","$1$1ZIXvAs4$B1JUIk1CEX0cedtD5vKmn1");
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile$*/