/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0601.h

$Author$
$Date$
$Log$
*/

#ifndef _AULA0601_
#define _AULA0601_                          "@(#)aula0601.h $Revision$"

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


/*$RCSfile$*/