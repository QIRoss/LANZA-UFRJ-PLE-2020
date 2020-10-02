/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0604.h

$Author$
$Date$
$Log$
*/

#ifndef _AULA0604_
#define _AULA0604_                          "@(#)aula0604.h $Revision$"

typedef enum {ok, erroMaiorQueDez, erroDigitoVerificadorInvalido} tipoErros;

tipoErros
GerarDigitoVerificadorPisPasep (char*, char*);

tipoErros
ValidarPisPasep (char *);

#endif

/*$RCSfile$*/