 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTypes.h

$Author: lucasqueiroz $
$Date: 2020/10/30 19:10:21 $
$Log: umlTypes.h,v $
Revision 1.2  2020/10/30 19:10:21  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/10/29 20:34:52  lucasqueiroz
Initial revision

*/

#ifndef UML_TYPES_H
#define UML_TYPES_H                 "@(#)umlTypes.h $Revision: 1.2 $"

typedef enum{umlEnglish=0,umlPortuguese=1,umlLanguagesAmount = 2}umlLanguageType;

typedef unsigned long long umlUserIdentifierType;
typedef unsigned long long umlUserProfileType;

typedef enum{umlDes=0,umlMd5=1,umlSha256=5,umlSha512=6}umlCryptAlgorithms;

unsigned umlCrypts[4][2]={{2,11},{8,22},{16,43},{16,86}};

#endif

/*$RCSfile: umlTypes.h,v $*/