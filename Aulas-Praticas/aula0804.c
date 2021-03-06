/* Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0804.c

$Author: lucasqueiroz $
$Date: 2020/10/27 05:52:13 $
$Log: aula0804.c,v $
Revision 1.1  2020/10/27 05:52:13  lucasqueiroz
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "aula08.h"

tipoErros
ConverterArquivoFormatoUnixFormatoDos (char *original, char *convertido){
    FILE *toRead, *toWrite;
    char buffer[1026];
    unsigned length=0;
    if(convertido == NULL){
        return arquivoInvalido;
        // incompleto para mkstemp e compor a string com time_t
        // time_t rawtime;
        // struct tm * timeinfo;
        // time ( &rawtime );
        // timeinfo = localtime ( &rawtime );
        // newName = strcat(original,"backup-AAAAMMDD_hhmmss");
        // printf("%s\n",newName);
        // ret = rename(original, newName);
        // filedes = mkstemp("somenameXXXXXX");
        // *convertido = &filedes;
    }
    toRead = fopen(original, "r");
    toWrite = fopen(convertido, "w");
    if(toRead == NULL){
        return arquivoInvalido;
    }
    while (!feof(toRead)) {
        fgets(buffer, 1024,toRead);
        length = strlen(buffer);
        if(buffer[length] == '\0' && buffer[length-1] == '\n'){
            buffer[length-1] = '\r';
            buffer[length] = '\n';
            buffer[length+1] = '\0';
        }
        fprintf(toWrite,"%s", buffer);
    }
    fclose(toRead);
    fclose(toWrite);
    return ok;
}

tipoErros
ConverterArquivoFormatoDosFormatoUnix (char *original, char *convertido){
    // int filedes = -1;
    // unsigned ret;
    FILE *toRead, *toWrite;
    toRead = fopen(original, "r");
    toWrite = fopen(convertido, "w");
    // char *newName;
    char buffer[1024];
    unsigned length=0;
    if(convertido == NULL){
        return arquivoInvalido;
        // incompleto para mkstemp e compor a string com time_t
        // time_t rawtime;
        // struct tm * timeinfo;
        // time ( &rawtime );
        // timeinfo = localtime ( &rawtime );
        // newName = strcat(original,"backup-AAAAMMDD_hhmmss");
        // printf("%s\n",newName);
        // ret = rename(original, newName);
        // filedes = mkstemp("somenameXXXXXX");
        // *convertido = &filedes;
    }
    toWrite = fopen(convertido, "w");
    if(toRead == NULL){
        return arquivoInvalido;
    }
        while (!feof(toRead)) {
        fgets(buffer, 1024,toRead);
        length = strlen(buffer);
        if(buffer[length] == '\0' && buffer[length-1] == '\n' && buffer[length-2] == '\r'){
            buffer[length-2] = '\n';
            buffer[length-1] = '\0';
        }
        fprintf(toWrite,"%s", buffer);
    }
    fclose(toRead);
    fclose(toWrite);
    return ok;
}

/*$RCSfile: aula0804.c,v $*/