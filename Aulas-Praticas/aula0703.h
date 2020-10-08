/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Autor: Lucas de Queiroz dos Reis
Descricao: aula0703.h

$Author$
$Date$
$Log$
*/


#ifndef _AULA0703_
#define _AULA0703_                      "@(#)aula0703.h $Revision$"

#ifdef __linux__
#define _XOPEN_SOURCE 600
#include <unistd.h>
#undef _XOPEN_SOURCE
#endif

#ifdef __FreeBSD__
#include <unistd.h>
#endif

#define APAGADO                         '0'
#define ACESO                           '1'
#define NUMERO_MAXIMO_LINHAS            250
#define NUMERO_MAXIMO_COLUNAS           800

typedef enum {ok, abscissaInvalida, ordenadaInvalida} tipoErros;

typedef enum {apagado, aceso} tipoPixel;

typedef unsigned int useconds_t;

tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera);

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera);

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linhaCantoSuperior, unsigned colunaCantoSuperior, unsigned linhaCantoInferior, unsigned colunaCantoInferior, useconds_t tempoEspera);

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linha, unsigned coluna, useconds_t tempoEspera);

#endif

/* $RCSfile$ */