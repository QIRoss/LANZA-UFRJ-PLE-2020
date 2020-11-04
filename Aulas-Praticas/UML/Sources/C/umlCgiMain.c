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
	// environmentType umlEnvironment;
	// unsigned umlReturnCode;
	// umlLanguageType umlLanguage[umlLanguagesAmount];
	// char umlConfigurationFile[UML_FILENAME_LENGTH+1];

	// if (mlCgiInitialize(&umlEnvironment) != ML_CGI_OK){
	// 	exit (ML_CGI_OK);
	// }
	// if (umlEnvironment == commandLine){
	// 	printf ("%s\n",umlInvalidEnviromenment);
	// 	exit (umlInvalidEnviromenment);
	// }

	// mlCgiBeginHttpHeader ("text/html");	
	// mlCgiEndHttpHeader ();

	printf("Content-type: text/html\n\n");
	printf("<!DOCTYPE html>\n");
	printf("<html>\n");
	printf("	<head>\n");
	printf("		<title>\n");
	printf("			Gerenciamento de Usuarios\n");
	printf("		</title>\n");
	printf("	</head>\n");
	printf("	<body align=\"center\">\n");
	printf("		<header>\n");
	printf("			<h1>Desenvolvido por Lucas de Queiroz dos Reis</h1>\n");
	printf("			<h2>lucasqreis@poli.ufrj.br</h2>\n");
	printf("		</header>\n");
	printf("	</body>\n");
	printf("</html>\n");

	

	return ML_CGI_OK;
}

/*$RCSfile$*/