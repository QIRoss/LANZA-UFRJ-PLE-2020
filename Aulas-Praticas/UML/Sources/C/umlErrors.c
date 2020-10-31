 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlErrors.c

$Author: lucasqueiroz $
$Date: 2020/10/29 22:32:17 $
$Log: umlErrors.c,v $
Revision 1.1  2020/10/29 22:32:17  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include "umlTypes.h"
#include "umlErrors.h"
#include "umlConst.h"

char *
umlCliErrorMessages[UML_LANGUAGES_AMOUNT][UML_ERRORS_AMOUNT]=
{
    {
        "Ok",
        "Path null",
        "Filename null",
        "Absolute Filename null",
        "Invalid Filename Length",
        "Invalid Path Length",
        "String null",
        "Validation set is null",
        "Invalid length for field",
        "Invalid character for field",
        "No dot on nickname (maybe more dots too)"
    },
    {
        "Sucesso",
        "Caminho nulo",
        "Nome de arquivo nulo",
        "Nome do arquivo e caminho absoluto nulo",
        "Comprimento de nome de arquivo invalido",
        "Comprimento de caminho de invalido",
        "String nula",
        "validation set nulo",
        "comprimento invalido para campo",
        "caractere invalido para campo",
        "Nenhum ponto no nickname (talvez mais que um)"
    }
};

char *
umlWebErrorMessages[UML_LANGUAGES_AMOUNT][UML_ERRORS_AMOUNT]=
{
    {
        "Ok",
        "Path null",
        "Filename null",
        "Absolute Filename null",
        "Invalid Filename Length",
        "Invalid Path Length",
        "String null",
        "Validation set is null",
        "Invalid length for field",
        "Invalid character for field",
        "No dot on nickname (maybe more dots too)"
    },
    {
        "Sucesso",
        "Caminho nulo",
        "Nome de arquivo nulo"
        "Nome do arquivo e caminho absoluto nulo",
        "Comprimento de nome de arquivo invalido",
        "Comprimento de caminho de invalido",
        "String nula",
        "validation set nulo",
        "comprimento invalido para campo",
        "caractere invalido para campo",
        "Nenhum ponto no nickname (talvez mais que um)"
    }
};

char *
UmlGetCliErrorMessage (umlErrorType umlErrorCode, umlLanguageType umlLanguageChosen){
    if(umlErrorCode >= umlErrorsAmount){
        return NULL;
    }
    if (umlErrorCode < 0){
        return NULL;
    }
    if (umlLanguageChosen < 0 || umlLanguageChosen >= umlLanguagesAmount){
        umlLanguageChosen = 0;
    }
    return umlCliErrorMessages[umlLanguageChosen][umlErrorCode];
}

char *
UmlGetWebErrorMessage (umlErrorType umlErrorCode, umlLanguageType umlLanguageChosen){
    if(umlErrorCode >= umlErrorsAmount){
        return NULL;
    }
    if (umlErrorCode < 0){
        return NULL;
    }
    if (umlLanguageChosen < 0 || umlLanguageChosen >= umlLanguagesAmount){
        umlLanguageChosen = 0;
    }
    return umlWebErrorMessages[umlLanguageChosen][umlErrorCode];
}

/*$RCSfile: umlErrors.c,v $*/