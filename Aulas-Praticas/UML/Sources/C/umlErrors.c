 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlErrors.c

$Author: lucasqueiroz $
$Date: 2020/10/31 20:58:57 $
$Log: umlErrors.c,v $
Revision 1.2  2020/10/31 20:58:57  lucasqueiroz
*** empty log message ***

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
        "No dot on nickname (maybe more dots too)",
        "Name before @ too long",
        "Name after @ too long",
        "No @ on mail",
        "Output null",
        "Fullname null",
        "First Name null",
        "Second Name null",
        "Name too long",
        "More or less space bars on fullname than it should be",
        "Hash null",
        "Crypt algo type null",
        "Hash too short",
        "Invalid algo type",
        "Hash does not exist",
        "Invalid salt length",
        "Invalid hash length",
        "Invalid DES length",
        "Salt null",
        "Plain password null",
        "Error crypting password",
        "Password too long",
        "Password and hash does not match"
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
        "Nenhum ponto no nickname (talvez mais que um)",
        "Nome antes do @ muito longo",
        "Nome depois do @ muito longo",
        "Nenhum @ no email",
        "Output nulo",
        "Nome completo nulo",
        "Primeiro nome nulo",
        "Segundo nome nulo",
        "Nome muito longo",
        "Mais ou menos barras de espaco no nome completo do que deveria",
        "Hash nula",
        "Algoritmo de crypt nulo",
        "Hash curta demais",
        "Tipo de algoritmo invalido",
        "Hash invalida",
        "Comprimento do salt invalido",
        "Comprimento da hash invalida",
        "Comprimento para DES invalida",
        "Salt nulo",
        "Senha plana nula",
        "Error durante criptografia",
        "Senha muito grande",
        "Senha e hash nao conferem"
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
        "No dot on nickname (maybe more dots too)",
        "Name before @ too long",
        "Name after @ too long",
        "No @ on mail",
        "Output null",
        "Fullname null",
        "First Name null",
        "Second Name null",
        "Name too long",
        "More or less space bars on fullname than it should be",
        "Hash null",
        "Crypt algo type null",
        "Hash too short",
        "Invalid algo type",
        "Hash does not exist",
        "Invalid salt length",
        "Invalid hash length",
        "Invalid DES length",
        "Salt null",
        "Plain password null",
        "Error crypting password",
        "Password too long",
        "Password and hash does not match"
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
        "Nenhum ponto no nickname (talvez mais que um)",
        "Nome antes do @ muito longo",
        "Nome depois do @ muito longo",
        "Nenhum @ no email",
        "Output nulo",
        "Nome completo nulo",
        "Primeiro nome nulo",
        "Segundo nome nulo",
        "Nome muito longo",
        "Mais ou menos barras de espaco no nome completo do que deveria",
        "Hash nula",
        "Algoritmo de crypt nulo",
        "Hash curta demais",
        "Tipo de algoritmo invalido",
        "Hash invalida",
        "Comprimento do salt invalido",
        "Comprimento da hash invalida",
        "Comprimento para DES invalida",
        "Salt nulo",
        "Senha plana nula",
        "Error durante criptografia",
        "Senha muito grande",
        "Senha e hash nao conferem"
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