 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlUserInterface.c

$Author: lucasqueiroz $
$Date: 2020/10/30 18:34:28 $
$Log: umlUserInterface.c,v $
Revision 1.1  2020/10/30 18:34:28  lucasqueiroz
Initial revision

*/

#include "umlUserInterface.h"
#include "umlConst.h"
#include "umlTypes.h"

char*
umlCliUserInterfaceMessages[UML_LANGUAGES_AMOUNT][UML_STRINGS_AMOUNT] = 
{
    {
        "Unknown Message."
    },
    {
        "Mensagem desconhecida."
    }
};

char*
umlWebUserInterfaceMessages[UML_LANGUAGES_AMOUNT][UML_STRINGS_AMOUNT] =
{
    {
        "Unknown Message."
    },
    {
        "Mensagem desconhecida."
    }
};

char *
UmlGetCliUserInterfaceMessage (umlUserInterfaceMessageNumberType umlMessageNumber, umlLanguageType umlLanguage){
    if(umlMessageNumber < 0 || umlMessageNumber>=umlStringsAmount){
        return umlCliUserInterfaceMessages[umlLanguage][unknownMessage];
    }
    if (umlLanguage < 0 || umlLanguage >= umlLanguagesAmount ){
        umlLanguage = 0 ;
    }
    return umlCliUserInterfaceMessages[umlLanguage][umlMessageNumber];
}

char *
UmlGetWebUserInterfaceMessage (umlUserInterfaceMessageNumberType umlMessageNumber, umlLanguageType umlLanguage){
    if(umlMessageNumber < 0 || umlMessageNumber>=umlStringsAmount){
        return umlCliUserInterfaceMessages[umlLanguage][unknownMessage];
    }
    if (umlLanguage < 0 || umlLanguage >= umlLanguagesAmount ){
        umlLanguage = 0 ;
    }
    return umlCliUserInterfaceMessages[umlLanguage][umlMessageNumber];
}

/*$RCSfile: umlUserInterface.c,v $*/