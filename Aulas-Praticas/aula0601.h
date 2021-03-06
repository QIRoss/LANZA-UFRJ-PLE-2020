/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0601.h

$Author: lucasqueiroz $
$Date: 2020/10/08 20:35:13 $
$Log: aula0601.h,v $
Revision 1.1  2020/10/08 20:35:13  lucasqueiroz
Initial revision

*/

#ifndef _AULA0601_
#define _AULA0601_                          "@(#)aula0601.h $Revision: 1.1 $"

#define TAMANHO                              11

typedef unsigned char byte;
typedef enum {ok, erroMaiorQueDez, erroDigitoVerificadorInvalido} tipoErros;

tipoErros
GerarDigitoVerificadorPisPasep (byte [TAMANHO]);

tipoErros
ValidarPisPasep (byte [TAMANHO]);

tipoErros
GerarPisPasep (byte *);

#endif


/*$RCSfile: aula0601.h,v $*/