 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlFunctions.c

$Author: lucasqueiroz $
$Date: 2020/10/29 21:23:40 $
$Log: umlFunctions.c,v $
Revision 1.1  2020/10/29 21:23:40  lucasqueiroz
Initial revision


*/

#include "umlConst.h"
#include "umlFunctions.h"
#include <stdio.h>
#include <string.h>

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
UmlCheckStringField (char *, char *,  size_t, size_t){
    
}

/*$RCSfile: umlFunctions.c,v $*/