/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlErrors.h

$Author: lucasqueiroz $
$Date: 2020/10/29 22:32:39 $
$Log: umlErrors.h,v $
Revision 1.1  2020/10/29 22:32:39  lucasqueiroz
Initial revision

*/

#include "umlTypes.h"

#ifndef UML_ERRORS_H
#define UML_ERRORS_H    "@(#)umlErrors.h $Revision: 1.1 $"

typedef enum{umlOk,umlPathNull,umlFilenameNull,umlAbsoluteFilenameNull,
        umlInvalidFilenameLength,umlInvalidPathLength,stringNull,
        validateSetNull,umlInvalidSize,umlInvalidChar,umlNoDotNickname,
        umlNameBeforeAtTooLong,umlNameAfterAtTooLong,umlNoAtOnMail,
        umlOutputNull,umlErrorsAmount} umlErrorType;

char *
UmlGetCliErrorMessage (umlErrorType, umlLanguageType);

char *
UmlGetWebErrorMessage (umlErrorType, umlLanguageType);

#endif
/*$RCSfile: umlErrors.h,v $*/