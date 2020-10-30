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
        "String from checkString null",
        "Validation set is null",
        "Invalid length for field",
        "Invalid character for field"
    },
    {
        "Sucesso",
        "Caminho nulo",
        "Nome de arquivo nulo",
        "Nome do arquivo e caminho absoluto nulo",
        "Comprimento de nome de arquivo invalido",
        "Comprimento de caminho de invalido",
        "String da funcao checkString nula",
        "validation set nulo",
        "comprimento invalido para campo",
        "caractere invalido para campo"
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
        "String from checkString null",
        "Validation set is null",
        "Invalid length for field",
        "Invalid character for field"
    },
    {
        "Sucesso",
        "Caminho nulo",
        "Nome de arquivo nulo"
        "Nome do arquivo e caminho absoluto nulo",
        "Comprimento de nome de arquivo invalido",
        "Comprimento de caminho de invalido",
        "String da funcao checkString nula",
        "validation set nulo",
        "comprimento invalido para campo",
        "caractere invalido para campo"
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