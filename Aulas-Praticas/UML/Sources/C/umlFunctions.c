 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlFunctions.c

$Author: lucasqueiroz $
$Date: 2020/10/31 00:01:40 $
$Log: umlFunctions.c,v $
Revision 1.3  2020/10/31 00:01:40  lucasqueiroz
*** empty log message ***

Revision 1.2  2020/10/30 23:22:19  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/10/29 21:23:40  lucasqueiroz
Initial revision


*/

#include "umlConst.h"
#include "umlFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

umlLanguageType
UmlGetLanguageIndex (char *umlLanguage){
    if(umlLanguage == NULL)
        return umlEnglish;
    if(strcmp(umlLanguage,UML_PORTUGUESE) == 0){
        return umlPortuguese;
    }
    return umlEnglish;
}

umlErrorType
UmlGetAbsoluteFileName(char *umlPath, char *umlFilename, char *umlAbsoluteFilename){
    unsigned umlPathSize;
    unsigned umlNameSize;
    unsigned umlTotalSize;
    if (!umlPath){
        return umlPathNull;
    }
    if (!umlFilename){
        return umlFilenameNull;
    }
    if (!umlAbsoluteFilename){
        return umlAbsoluteFilenameNull;
    }
    umlNameSize=strlen(umlFilename);
    if (umlNameSize>= UML_FILENAME_MAX_LENGTH){
        return umlInvalidFilenameLength;
    }
    umlPathSize=strlen(umlPath);
    if (umlPathSize>= UML_ABSOLUTE_PATH_MAX_LENGTH){
        return umlInvalidPathLength;
    }
    umlTotalSize=umlPathSize+umlNameSize+1;
    if (umlPath[umlPathSize-1]!='/'){
        snprintf(umlAbsoluteFilename,umlTotalSize+1,"%s/%s",umlPath,umlFilename);
    } else {
        snprintf(umlAbsoluteFilename,umlTotalSize,"%s%s",umlPath,umlFilename);
    }
    return umlOk;
}

umlErrorType
UmlCheckStringField (char *umlString, char *umlValidateSet, size_t umlMinLength, size_t umlMaxLength){
    unsigned umlLength;
    unsigned umlIndexString;
    unsigned umlIndexSet;
    unsigned umlIsValid=0;

    if(!umlString){
        return stringNull;
    }
    if(!umlValidateSet){
        return validateSetNull;
    }
    umlLength = strlen(umlString);
    if(umlMinLength > umlLength || umlLength > umlMaxLength){
        return umlInvalidSize;
    }
    for(umlIndexString=0; umlString[umlIndexString] !=UML_EOS; umlIndexString++){
        umlIsValid=0;
        for(umlIndexSet=0; umlValidateSet[umlIndexSet]!=UML_EOS; umlIndexSet++){
            if (umlString[umlIndexString] == umlValidateSet[umlIndexSet]){
                umlIsValid=1;
            }
        }
        if(umlIsValid==0){
            return umlInvalidChar;
        }
    }
    return umlOk;
}

umlErrorType
UmlCheckNickname (char *umlString, char *umlValidateSet, size_t umlMinLength , size_t umlMaxLength){
    unsigned umlLength;
    unsigned umlIndexString;
    unsigned umlIndexSet;
    unsigned umlIsValid=0;
    unsigned umlDot=0;

    if(!umlString){
        return stringNull;
    }
    if(!umlValidateSet){
        return validateSetNull;
    }
    umlLength = strlen(umlString);
    if(umlMinLength>umlLength || umlLength> umlMaxLength){
        return umlInvalidSize;
    }
    for(umlIndexString=0;umlString[umlIndexString] != UML_EOS;umlIndexString++){
        umlIsValid=0;
        for(umlIndexSet=0;umlValidateSet[umlIndexSet] !=UML_EOS;umlIndexSet++){
            if (umlString[umlIndexString]==umlValidateSet[umlIndexSet]){
                umlIsValid=1;
            }
        }
        if (umlString[umlIndexString]=='.'){
            umlDot++;
        } else if(umlIsValid==0){
            return umlInvalidChar;
        }
    }
    if (umlDot!=1){
        return umlNoDotNickname;
    }
    return umlOk;
}

umlErrorType
UmlCheckEmail (char *umlString, char *umlValidateSet, size_t umlMinLength, size_t umlMaxLength){
    unsigned umlLength;
    unsigned umlIndexString;
    unsigned umlIndexSet;
    unsigned umlIsValid;
    unsigned umlAt=0;
    unsigned umlAfterAtIndex=0;

    if(!umlString){
        return stringNull;
    }
    if(!umlValidateSet){
        return validateSetNull;
    }
    umlLength = strlen(umlString);
    if(umlMinLength>umlLength || umlLength> umlMaxLength){
        return umlInvalidSize;
    }
    for(umlIndexString=0;umlString[umlIndexString] != UML_EOS;umlIndexString++){
        umlIsValid=0;
        for(umlIndexSet=0;umlValidateSet[umlIndexSet] !=UML_EOS;umlIndexSet++){
            if (umlString[umlIndexString]==umlValidateSet[umlIndexSet]){
                umlIsValid=1;
            }
        }
        if (umlString[umlIndexString]=='@'){
            umlAt++;
            if(umlIndexString>64){
                return umlNameBeforeAtTooLong;
            }
        } else if(umlIsValid==0){
            return umlInvalidChar;
        } if(umlAt == 1){
            umlAfterAtIndex++;
        } if(umlAfterAtIndex > 255){
            return umlNameAfterAtTooLong;
        }
    }
    if (umlAt!=1){
        return umlNoAtOnMail;
    }
    return umlOk;
}

umlErrorType
UmlCreateRandomString (char *umlValidateSet, size_t umlLength, char *umlOutput){
    unsigned umlIndex;
    unsigned umlSetLength;
    char umlBuffer[umlLength];

    if(!umlValidateSet){
        return validateSetNull;
    }
    if(!umlOutput){
        return umlOutputNull;
    }
    srand((unsigned )time(NULL));
    umlSetLength=strlen(umlValidateSet);
    for(umlIndex=0;umlIndex<umlLength;umlIndex++){
        umlBuffer[umlIndex]=umlValidateSet[rand()%umlSetLength];
    }
    umlBuffer[umlIndex]=UML_EOS;
    strcpy(umlOutput,umlBuffer);
    return umlOk;
}

/*$RCSfile: umlFunctions.c,v $*/