 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlConst.h

$Author$
$Date$
$Log$
*/

#include "umlTypes.h"
#include "umlErrors.h"
#include "umlUserInterface.h"

#ifdef __linux__
#include <linux/limits.h>
#endif

#ifdef __FreeBSD__
#include <sys/syslimits.h>
#endif

#ifndef UML_CONST_H
#define UML_CONST_H                     "@(#)umlConst.h $Revision$"

#define UML_PORTUGUESE                  "umlPortuguese"
#define UML_ENGLISH                     "umlEnglish"

#define UML_LANGUAGES_AMOUNT            umlLanguagesAmount
#define UML_ERRORS_AMOUNT               umlErrorsAmount
#define UML_STRINGS_AMOUNT              umlStringsAmount

#define UML_OK                          0
#define UML_EOS                         '\0'

#define UML_INVALID_ARGC                1
#define UML_INVALID_ARGUMENT            2
#define UML_INVALID_CHARACTER           3
#define UML_IMPOSSIBLE_POINT            4
#define UML_NO_ERROR_FOUND              5
 
#define UML_ABSOLUTE_PATH_MAX_LENGTH    PATH_MAX
#define UML_FILENAME_MAX_LENGTH         NAME_MAX

#define UML_TEST_CHECKSTRINGFIELD_ARGC  5
#define UML_TEST_NICKNAME_ARGC          5

#endif

/*$RCSfile$*/