 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlFunctions.c

$Author: lucasqueiroz $
$Date: 2020/10/29 21:23:40 $
$Log: umlFunctions.c,v $
Revision 1.1  2020/10/29 21:23:40  lucasqueiroz
Initial revision


*/
#include "umlConst.h"
#include "umlFunctions.h"
#include <stdio.h>
#include <string.h>

umlLanguageType
UmlGetLanguageIndex (char *umlLanguage){
    if(umlLanguage == NULL)
        return umlEnglish;
    if(strcmp(umlLanguage,UML_PORTUGUESE) == 0){
        return umlPortuguese;
    }
    return umlEnglish;
}

/*$RCSfile: umlFunctions.c,v $*/