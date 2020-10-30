 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlFunctions.h

$Author: lucasqueiroz $
$Date: 2020/10/30 23:21:55 $
$Log: umlFunctions.h,v $
Revision 1.2  2020/10/30 23:21:55  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/10/29 20:36:33  lucasqueiroz
Initial revision

*/
#include "umlTypes.h"
#include <stdio.h>

#ifndef UML_FUNCTIONS_H
#define UML_FUNCTIONS_H              "@(#)umlFunctions.h $Revision: 1.2 $"

umlLanguageType
UmlGetLanguageIndex (char *);

umlErrorType
UmlGetAbsoluteFileName (char *, char *, char *);

umlErrorType
UmlCheckStringField (char *, char *,  size_t, size_t);

umlErrorType
UmlCheckNickname (char *, char *, size_t, size_t);

umlErrorType
UmlCheckEmail (char *, char *, size_t, size_t);

umlErrorType
UmlCreateRandomString (char *, size_t, char *);

umlErrorType
UmlCreateNickname (char *, char *, char *);

// umlErrorType
// UmlGetCryptAlgorithm (char *, umlCryptAlgorithms *, char *);

// umlErrorType
// UmlEncodePasswordWithSpecificAlgorithm (char *, umlCryptAlgorithms, char *);

umlErrorType
UmlEncodePasswordWithSpecificSalt (char *, char *, char *);

umlErrorType
UmlCheckPassword (char *, char *);



#endif

/*$RCSfile: umlFunctions.h,v $*/