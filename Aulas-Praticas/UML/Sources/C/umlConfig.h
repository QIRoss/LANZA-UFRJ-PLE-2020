/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2020/4 - PLE-1
Prof. Marcelo Luiz Drumond Lanza
Author: Lucas de Queiroz dos Reis
Description: umlConfig.h

$Author: lucasqueiroz $
$Date: 2020/10/30 19:08:26 $
$Log: umlConfig.h,v $
Revision 1.1  2020/10/30 19:08:26  lucasqueiroz
Initial revision

*/


#ifndef UML_CONFIG_H
#define UML_CONFIG_H                            "@(#)umlConfig.h $Revision: 1.1 $"

#ifndef UML_WEB_SERVER_URL
#define UML_WEB_SERVER_URL                      "http://www02.del.ufrj.br/~marcelo.lanza/UML"
#endif /* #ifndef UML_WEB_SERVER_URL */

#ifndef UML_ADMINISTRATOR_USER_IDENTIFIER
#define UML_ADMINISTRATOR_USER_IDENTIFIER       30737
#endif

#ifndef UML_PRIVATE_ROOT_DIRECTORY              
#define UML_PRIVATE_ROOT_DIRECTORY              "/users/username/private/EEL270/2020-4/Aulas-Praticas/UML/"
#endif

#ifndef UML_DATA_DIRECTORY                      
#define UML_DATA_DIRECTORY                      "/users/username/private/EEL270/2020-4/Aulas-Praticas/UML/Data/"
#endif

#ifndef UML_COOKIES_DIRECTORY
#define UML_COOKIES_DIRECTORY                   "/users/username/private/EEL270/2020-4/Aulas-Praticas/UML/Cookies/"
#endif

#ifndef UML_USERS_DATA_FILENAME
#define UML_USERS_DATA_FILENAME                 "users"
#endif

#ifndef UML_INVITED_USERS_DATA_FILENAME
#define UML_INVITED_USERS_DATA_FILENAME         "invited.users"
#endif

#ifndef UML_REQUESTING_USERS_DATA_FILENAME
#define UML_REQUESTING_USERS_DATA_FILENAME      "requesting.users"
#endif

#ifndef UML_LOCKED_USERS_DATA_FILENAME
#define UML_LOCKED_USERS_DATA_FILENAME          "locked.users"
#endif

#endif /* #ifndef UML_CONFIG_H */

/*$RCSfile: umlConfig.h,v $*/