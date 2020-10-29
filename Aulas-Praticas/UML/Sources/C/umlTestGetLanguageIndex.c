 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestGetLanguageIndex.c

$Author: lucasqueiroz $
$Date: 2020/10/29 21:23:13 $
$Log: umlTestGetLanguageIndex.c,v $
Revision 1.1  2020/10/29 21:23:13  lucasqueiroz
Initial revision


*/

#include <stdio.h>
#include <stdlib.h>
#include "umlFunctions.h"

#define OK                              0
#define ARGUMENT_NUMBER                 2

#define INVALID_ARGC_SIZE               1
#define IMPOSSIBLE_POINT                2

int main(int argc,char *argv[]){
    umlLanguageType verify;
    if(!(argc==ARGUMENT_NUMBER || argc==1)){
        printf("Use %s:\t<string language>\n",argv[0]);
        exit(INVALID_ARGC_SIZE);
    }
    verify = UmlGetLanguageIndex(argv[1]);
    if(verify==0){
        printf("Language chosen by %s:\tenglish.\n",argv[1]);
    }
    else if(verify==1){
        printf("Language chose by %s:\tportuguese.\n",argv[1]);
    } else {
        printf("ERROR: IT SHOULD BE IMPOSSIBLE TO REACH THIS MESSAGE.\n");
        exit(IMPOSSIBLE_POINT);
    }
    return OK;
}


/*$RCSfile: umlTestGetLanguageIndex.c,v $*/