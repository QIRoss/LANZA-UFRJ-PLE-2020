 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlUserInterface.h

$Author$
$Date$
$Log$
*/

#ifndef UML_USER_INTERFACE_H
#define UML_USER_INTERFACE_H    "@(#)umlUserInterface.h $Revision$"

typedef umlUserInterfaceMessageNumberType;

char *
UmlGetCliUserInterfaceMessage (umlUserInterfaceMessageNumberType, umlLanguageType);

char *
UmlGetWebUserInterfaceMessage (umlUserInterfaceMessageNumberType, umlLanguageType);


#endif

/*$RCSfile$*/