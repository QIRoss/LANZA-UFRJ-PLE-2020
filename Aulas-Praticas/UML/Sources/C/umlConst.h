 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlConst.h

$Author: lucasqueiroz $
$Date: 2020/10/31 20:58:42 $
$Log: umlConst.h,v $
Revision 1.2  2020/10/31 20:58:42  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/10/31 20:02:54  lucasqueiroz
Initial revision

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
#define UML_CONST_H                     "@(#)umlConst.h $Revision: 1.2 $"

#define UML_PORTUGUESE                  "umlPortuguese"
#define UML_ENGLISH                     "umlEnglish"

#define UML_LANGUAGES_AMOUNT            umlLanguagesAmount
#define UML_ERRORS_AMOUNT               umlErrorsAmount
#define UML_STRINGS_AMOUNT              umlStringsAmount

#define UML_OK                                  0
#define UML_EOS                                 '\0'

#define UML_INVALID_ARGC                        1
#define UML_INVALID_ARGUMENT                    2
#define UML_INVALID_CHARACTER                   3
#define UML_IMPOSSIBLE_POINT                    4
#define UML_NO_ERROR_FOUND                      5
 
#define UML_ABSOLUTE_PATH_MAX_LENGTH            PATH_MAX
#define UML_FILENAME_MAX_LENGTH                 NAME_MAX

#define UML_TEST_CHECKSTRINGFIELD_ARGC          5
#define UML_TEST_NICKNAME_ARGC                  3
#define UML_TEST_CHECK_EMAIL_ARGC               5
#define UML_TEST_CREATE_RANDOM_STRING_ARGC      3
#define UML_TEST_CREATE_NICKNAME_ARGC           2
#define UML_TEST_GET_CRYPT_ALGO_ARGC            3
#define UML_TEST_SPECIFIC_ALGO_ARGC             3
#define UML_TEST_SPECIFIC_SALT_ARGC             3
#define UML_TEST_CHECK_PASSWORD_ARGC            3

#define UML_NICKNAME_MIN_LENGTH                 3
#define UML_NICKNAME_MAX_LENGTH                 65

#define UML_FULLNAME_MAX_LENGTH                 65

#define UML_PASSWORD_MAX_LENGHT                 86
#define UML_VALID_SALT_SET                      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789./"                  


#endif

/*$RCSfile: umlConst.h,v $*/