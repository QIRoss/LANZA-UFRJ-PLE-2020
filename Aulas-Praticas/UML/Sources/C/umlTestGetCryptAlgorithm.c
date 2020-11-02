 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlTestGetCryptAlgorithm .c

$Author: lucasqueiroz $
$Date: 2020/11/01 04:01:36 $
$Log: umlTestGetCryptAlgorithm.c,v $
Revision 1.1  2020/11/01 04:01:36  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crypt.h>
#include "umlConst.h"
#include "umlFunctions.h"
#include "umlErrors.h"
#include "umlTypes.h"

int main(int argc,char *argv[]){
    char *types[7] = {"DES","Md5",NULL,NULL,NULL,"Sha256","Sha512"};
    umlCryptAlgorithms algoType[1];
    char salt[100];
    umlErrorType verify;
    if(UML_TEST_GET_CRYPT_ALGO_ARGC != argc){
        printf("Use %s: <password to be converted> <salt>\n",argv[0]);
        exit(UML_INVALID_ARGC);
    }
    printf("\nDES TEST\n");
    verify = UmlGetCryptAlgorithm(crypt(argv[1],"11"),algoType,salt);
    printf("Algo Type: %u(%s)\nSalt: %s\n",*algoType,types[*algoType],salt);
    printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));

    // GET BACK TO CORRECT OTHER ALGOS MEM MANAGEMENT LATER

    // printf("\nMD5 TEST\n");
    // verify = UmlGetCryptAlgorithm(crypt(argv[1],"$1$2m4sEQzn"),algoType,salt);
    // printf("Algo Type: %u(%s)\nSalt: %s\n",*algoType,types[*algoType],salt);
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));

    // printf("\nSHA-256 TEST\n");
    // verify = UmlGetCryptAlgorithm(crypt(argv[1],"$5$11"),algoType,salt);
    // printf("Algo Type: %u(%s)\nSalt: %s\n",*algoType,types[*algoType],salt);
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));

    // printf("\nSHA-512 TEST\n");
    // verify = UmlGetCryptAlgorithm(crypt(argv[1],"$6$11"),algoType,salt);
    // printf("Algo Type: %u(%s)\nSalt: %s\n",*algoType,types[*algoType],salt);
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlEnglish));
    // printf("%s\n",UmlGetCliErrorMessage(verify,umlPortuguese));
    return UML_OK;
}

/*$RCSfile: umlTestGetCryptAlgorithm.c,v $*/