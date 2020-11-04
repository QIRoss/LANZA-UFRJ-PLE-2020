 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestCheckPassword.c
$Author: lucasdequeirozdosreis $
$Date: 2020/11/02 18:22:19 $
$Log: umlTestCheckPassword.c,v $
Revision 1.1  2020/11/02 18:22:19  lucasdequeirozdosreis
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

#ifdef __linux__
#include <crypt.h>
#include <linux/limits.h>
#endif

#ifdef __FreeBSD__
#include <unistd.h>
#include <syslimits.h>
#endif

int main(int argc,char *argv[]){
    umlErrorType verify;
    if(UML_TEST_CHECK_PASSWORD_ARGC != argc){
        printf("Use %s: <plain password> <hash> \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    verify = UmlCheckPassword(argv[1],argv[2]);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile: umlTestCheckPassword.c,v $*/