 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlFunctions.c

$Author: lucasqueiroz $
$Date: 2020/10/31 20:59:24 $
$Log: umlFunctions.c,v $
Revision 1.4  2020/10/31 20:59:24  lucasqueiroz
*** empty log message ***

Revision 1.3  2020/10/31 00:01:40  lucasqueiroz
*** empty log message ***

Revision 1.2  2020/10/30 23:22:19  lucasqueiroz
*** empty log message ***

Revision 1.1  2020/10/29 21:23:40  lucasqueiroz
Initial revision


*/

#include "umlConst.h"
#include "umlFunctions.h"
#include "umlTypes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef __linux__
#include <crypt.h>
#include <linux/limits.h>
#endif

#ifdef __FreeBSD__
#include <unistd.h>
#include <syslimits.h>
#endif

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

umlErrorType
UmlCreateNickname(char *umlFullName , char *umlFirstName , char *umlSecondName){
    unsigned umlNameSize;
    unsigned umlIndex;
    unsigned umlSpace=0;
    char umlCopy[UML_NICKNAME_MAX_LENGTH];
    char *umlWord;
    if(!umlFullName){
        return umlFullNameNull;
    }
    if(!umlFirstName){
        return umlFirstNameNull;
    }
    if(!umlSecondName){
        return umlSecondNameNull;
    }
    umlNameSize=strlen(umlFullName);
    if (umlNameSize>UML_FULLNAME_MAX_LENGTH){
        return umlNameTooLong;
    }
    strcpy(umlCopy,umlFullName);
    umlWord = strtok(umlCopy , " " );
    for(umlIndex=0;umlIndex<umlNameSize;umlIndex++){
        if(umlFullName[umlIndex]==' ' && umlFullName[umlIndex-1]!=' ')
        umlSpace++;
    }
    if(umlSpace==0){
        return umlInvalidSpaceBarsNumber;
    }
    char *umlNameArray[umlSpace+1];
    umlIndex=0;
    while(umlWord!=NULL){
        umlNameArray[umlIndex]=umlWord;
        umlWord = strtok(NULL," ");
        umlIndex++;
    }
    snprintf(umlFirstName,UML_NICKNAME_MAX_LENGTH+1,"%s.%s",
        umlNameArray[0],umlNameArray[umlSpace]);
    if(umlSpace==1){
        umlSecondName[0]=UML_EOS;
    } else {
        snprintf(umlSecondName,UML_NICKNAME_MAX_LENGTH+1,"%s.%s",
        umlNameArray[0],umlNameArray[umlSpace-1]);
    }
    return umlOk;
}

umlErrorType
UmlGetCryptAlgorithm (char *umlHash, umlCryptAlgorithms *umlAlgoType, char *umlSalt){
    unsigned umlSaltCount=0;
    unsigned umlHashCount=0;
    unsigned umlIndex;
    unsigned umlIsSalt=1;
    unsigned umlCrypts[7][2]={{2,11},{12,22},{0,0},{0,0},{0,0},{16,43},{16,86}};

    if(!umlHash){
        return umlHashNull;
    }
    if(!umlAlgoType){
        return umlAlgoTypeNull;
    }
    if(!umlSalt){
        return umlSaltNull;
    }
    if(umlHash[0]!='$'){
        *umlAlgoType=umlDes;
    } else if(umlHash[1]=='1'){
        *umlAlgoType=umlMd5;
    } else if(umlHash[1]=='5'){
        *umlAlgoType=umlSha256;
    } else if(umlHash[1]=='6'){
        *umlAlgoType=umlSha512;
    } else {
        return umlInvalidAlgoType;
    }
    if(strlen(umlHash)<(umlCrypts[*umlAlgoType][0]+umlCrypts[*umlAlgoType][1])){
        return umlShortHash;
    }
    if(*umlAlgoType!=umlDes){
        if (umlHash[0]!='$' || umlHash[2]!='$'){
            return umlInvalidHash;
        }
        for(umlIndex=0;(umlHash[umlIndex+3]!='$') || (umlIndex=umlCrypts[*umlAlgoType][0]);umlIndex++){
            umlSalt[umlIndex] = umlHash[umlIndex+3];
        }
        umlSalt[umlIndex] = '\0';
        for(umlIndex=3;umlHash[umlIndex];umlIndex++){
            if(umlHash[umlIndex]=='$'){
                umlIsSalt=0;
            } else {
                if(!((umlHash[umlIndex]>='A'&&umlHash[umlIndex]<='Z') ||
                (umlHash[umlIndex]>='a'&&umlHash[umlIndex]<='z')||
                (umlHash[umlIndex]>='.'&&umlHash[umlIndex]<='9'))){
                    return umlInvalidChar;
                }
                if (umlSaltCount>umlCrypts[*umlAlgoType][0]) {
                    return umlInvalidSaltLength;
                }
                if (umlHashCount>umlCrypts[*umlAlgoType][1]) {
                    return umlInvalidHashLength;
                }
                if (umlIsSalt==1){
                    umlSaltCount++;
                } else if (umlIsSalt==0){
                    umlHashCount++;
                }
            }

        }
        if(umlHashCount<umlCrypts[*umlAlgoType][1]){
            return umlShortHash;
        }
    } else {			
        if (strlen(umlHash)!=13){
            return umlInvalidDesLength;
        }
        umlSalt[0]=umlHash[0];
        umlSalt[1]=umlHash[1];
        for(umlIndex=0;umlHash[umlIndex]!=UML_EOS;umlIndex++){
            if(!((umlHash[umlIndex]>='A'&&umlHash[umlIndex]<='Z') ||
            (umlHash[umlIndex]>='a'&&umlHash[umlIndex]<='z')||
            (umlHash[umlIndex]>='.'&&umlHash[umlIndex]<='9'))){
                return umlInvalidChar;
            }
        }
    }
    return umlOk;
}
 
umlErrorType
UmlEncodePasswordWithSpecificAlgorithm(char * umlPassword , 
    umlCryptAlgorithms umlType, char *umlHash){
    umlErrorType verify;
    unsigned umlCrypts[7][2]={{2,11},{8,22},{0,0},{0,0},{0,0},{16,43},{16,86}};
    unsigned umlSaltLenght=umlCrypts[umlType][0];
    char umlRandomSalt[umlSaltLenght+1];
    char umlRandomSaltEntry[umlSaltLenght+5];
    char *umlBuffer;

    if(!umlPassword){
        return umlPasswordNull;
    }
    if(!umlHash){
        return umlHashNull;
    }
    if(!(umlType == umlDes || umlType==umlMd5 || umlType==umlSha256 || umlType==umlSha512)){
        return umlInvalidAlgoType; 
    }
    if (strlen(umlPassword)>UML_PASSWORD_MAX_LENGHT){
        return umlLongPassword;
    }
    verify = UmlCreateRandomString(UML_VALID_SALT_SET,(size_t) umlSaltLenght, umlRandomSalt);
    if(verify!=umlOk){
        return verify;
    }
    if(umlType==umlDes){
        umlBuffer=crypt(umlPassword,umlRandomSalt);
        if(!umlBuffer){
            return umlErrorCrypt;
        }
        strcpy(umlHash,umlBuffer);
    } else {
        if(umlType==umlMd5){
            snprintf(umlRandomSaltEntry,umlSaltLenght+5,"$%i$%s$",1,umlRandomSalt);
        }
        if(umlType==umlSha256){
            snprintf(umlRandomSaltEntry,umlSaltLenght+5,"$%i$%s$",5,umlRandomSalt);
        }
        if(umlType==umlSha512){
            snprintf(umlRandomSaltEntry,umlSaltLenght+5,"$%i$%s$",6,umlRandomSalt);
        }
        if(!(umlBuffer=crypt(umlPassword,umlRandomSalt))){
            return umlErrorCrypt;
        }
        strcpy(umlHash,umlBuffer);
    }
    return umlOk;
}

umlErrorType
UmlEncodePasswordWithSpecificSalt (char *umlPlainPassword, char *umlSalt, char *umlHash){
    char *umlBuffer;
    if(!umlPlainPassword){
        return umlPasswordNull;
    }
    if(!umlSalt){
        return umlSaltNull;
    }
    if(!umlHash){
        return umlHashNull;
    }
    if(strlen(umlPlainPassword)>UML_PASSWORD_MAX_LENGHT){
        return umlLongPassword;
    }
    umlBuffer=crypt(umlPlainPassword,umlSalt);
    if(!umlBuffer){
        return umlErrorCrypt;
    }
    strcpy(umlHash,umlBuffer);
    return umlOk;
}

umlErrorType
UmlCheckPassword (char *umlPlainPassword, char *umlHash){
    char umlSalt[20];
    char *umlBuffer;
    umlBuffer = (char *) malloc(87);
    unsigned umlIndex;
    umlErrorType verify=umlOk;
    if(!umlPlainPassword){
        return umlPasswordNull;
    }
    if(!umlHash){
        return umlHashNull;
    }
    if(umlHash[0] == '$' && umlHash[2] == '$'){
        umlSalt[0] = umlHash[0];
        umlSalt[1] = umlHash[1];
        umlSalt[2] = umlHash[2];
        for(umlIndex=3;umlHash[umlIndex]!='$';umlIndex++){
            umlSalt[umlIndex] = umlHash[umlIndex];
        }
    } else {
        umlSalt[0] = umlHash[0];
        umlSalt[1] = umlHash[1];
    }
    verify = UmlEncodePasswordWithSpecificSalt(umlPlainPassword,umlSalt,umlBuffer);
    if(verify != umlOk){
        return verify;
    }
    if(!strcmp(umlHash,umlBuffer)){
        return umlOk;
    }
    return umlPasswordUnmatch;
}

/*$RCSfile: umlFunctions.c,v $*/