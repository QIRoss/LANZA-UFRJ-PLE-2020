 /*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlCgiMain.c

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "umlConst.h"
#include "umlErrors.h"
#include "umlUserInterface.h"

#include "Libraries/mlcgi.h"
 

int
main(int argc,char *argv[]){
	environmentType umlEnvironment;
	unsigned umlReturnCode;
	umlLanguageType umlLanguage[umlLanguagesAmount];
	char umlConfigurationFile[UML_FILENAME_LENGTH+1];

	if (mlCgiInitialize(&umlEnvironment) != ML_CGI_OK){
		exit (ML_CGI_OK);
	}
	if (umlEnvironment == commandLine){
		printf ("%s\n",umlInvalidEnviromenment);
		exit (umlInvalidEnviromenment);
	}

	mlCgiBeginHttpHeader ("text/html");
	mlCgiEndHttpHeader ();

	return ML_CGI_OK;
}

/*$RCSfile$*/