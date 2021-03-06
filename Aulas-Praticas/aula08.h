// /* Universidade Federal do Rio de Janeiro
// Escola Politecnica
// Departamento de Eletronica e de Computacao
// EEL270 - Computacao II - Turma 2020/4 - PLE-1
// Prof. Marcelo Luiz Drumond Lanza
// Autor: Lucas de Queiroz dos Reis
// Descricao: aula08.h

// $Author: lucasqueiroz $
// $Date: 2020/10/27 05:51:26 $
// $Log: aula08.h,v $
// Revision 1.1  2020/10/27 05:51:26  lucasqueiroz
// Initial revision
//
// */
#include <stdlib.h>
#include <memory.h>

#ifndef _AULA08_H_
#define _AULA08_H_                      "@(#)aula08.h $Revision: 1.1 $"

#define CONJUNTO_BASE_64              "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"  

typedef enum{ok, tamanhoNulo, arquivoInvalido} tipoErros;

typedef unsigned char byte;

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned numeroBytes);

tipoErros
ConverterArquivoFormatoUnixFormatoDos (char *original, char *convertido);

tipoErros
ConverterArquivoFormatoDosFormatoUnix (char *original, char *convertido);

tipoErros
ExibirConteudoArquivo (char *);


#endif

/*$RCSfile: aula08.h,v $*/