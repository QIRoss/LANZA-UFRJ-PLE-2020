 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestGetWebUserInterfaceMessage.c

$Author: lucasqueiroz $
$Date: 2020/10/30 18:35:14 $
$Log: umlTestGetWebUserInterfaceMessage.c,v $
Revision 1.1  2020/10/30 18:35:14  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include "umlConst.h"
#include "umlUserInterface.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    unsigned interfaceMessage=0;
    unsigned language=0;
    char *validate;
    if(3 != argc){
        printf("Use %s: \n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    interfaceMessage= (unsigned) strtoul(argv[1],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    language= (unsigned) strtoul(argv[2],&validate,10);
    if(*validate != UML_EOS){
        printf("Invalid argument.\n");
        exit(UML_INVALID_ARGUMENT);
    }
    validate  = UmlGetCliUserInterfaceMessage(language,interfaceMessage);
    if(validate == NULL){
        printf("Error code does not exist.\n");
        exit(UML_NO_ERROR_FOUND);
    }
    printf("%s\n",UmlGetCliUserInterfaceMessage(language,interfaceMessage));
    return UML_OK;
}

/*$RCSfile: umlTestGetWebUserInterfaceMessage.c,v $*/