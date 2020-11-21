#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica de Computacao
#EEL270 - Computacao II - Turma 2020/4 - PLE-1
#Prof. Marcelo Luiz Drumond Lanza
#Autor: Lucas de Queiroz dos Reis
#Description: GNUmakefile

# $AUTHOR$
# $DATE$
# $LOG$

OS = $(shell uname -s)

CC = gcc
LD = gcc

ifeq ($(cc),GCC)
CC = gcc
endif

ifeq ($(cc), CLANG)
CC = clang
endif

LD = $(CC)
CFLAGS = -Wall -std=c11
LFLAGS = -Wall -std=c11

AR = ar

LFLAGS = -Wall -std=c11
AFLAGS = -r

UML_PRIVATE_ROOT_DIRECTORY = /users/lucas.reis/private/EEL270/2020-4/Aulas-Praticas/UML
UML_PUBLIC_HTML_DIRECTORY = /users/lucas.reis/public/html

UMLTESTGETLANGUAGEINDEXOBJ = umlFunctions.o umlTestGetLanguageIndex.o
UMLTESTGETCLIERRORMESSAGEOBJ = umlErrors.o umlTestGetCliErrorMessage.o
UMLTESTGETWEBERRORMESSAGEOBJ = umlErrors.o umlTestGetWebErrorMessage.o
UMLTESTGETCLIUSERINTERFACEMESSAGEOBJ = umlUserInterface.o umlTestGetCliUserInterfaceMessage.o
UMLTESTGETWEBUSERINTERFACEMESSAGEOBJ = umlUserInterface.o umlTestGetWebUserInterfaceMessage.o
UMLTESTCHECKSTRINGFIELDOBJ = umlFunctions.o umlErrors.o umlTestCheckStringField.o
UMLTESTCHECKNICKNAMEOBJ = umlFunctions.o umlErrors.o umlTestCheckNickname.o
UMLTESTCHECKEMAILOBJ = umlFunctions.o umlErrors.o umlTestCheckEmail.o
UMLTESTCREATERANDOMSTRINGOBJ = umlFunctions.o umlErrors.o umlTestCreateRandomString.o
UMLTESTCREATENICKNAMEOBJ = umlFunctions.o umlErrors.o umlTestCreateNickname.o
UMLTESTGETCRYPTALGORITHMOBJ	= umlFunctions.o umlErrors.o umlTestGetCryptAlgorithm.o
UMLTESTENCODEPASSWORDWITHSPECIFICALGORITHMOBJ = umlFunctions.o umlErrors.o umlTestEncodePasswordWithSpecificAlgorithm.o
UMLTESTENCODEPASSWORDWITHSPECIFICSALTOBJ = umlFunctions.o umlErrors.o umlTestEncodePasswordWithSpecificSalt.o
UMLTESTCHECKPASSWORDOBJ = umlFunctions.o umlErrors.o umlTestCheckPassword.o

UMLCGIMAINOBJ = umlUserInterface.o umlErrors.o umlCgiMain.o

UMLTESTS = umltestgetlanguageindex\
	umltestgetclierrormessage\
	umltestgetweberrormessage\
	umltestgetcliuserinterfacemessage\
	umltestgetwebuserinterfacemessage\
	umltestcheckstringfield\
	umltestchecknickname\
	umltestcheckemail\
	umltestcreaterandomstring\
	umltestcreatenickname\
	umltestgetcryptalgorithm\
	umltestencodepasswordwithspecificalgorithm\
	umltestencodepasswordwithspecificsalt\
	umltestcheckpassword\

UMLCGIS = umlMain.cgi

MLCGI = libmlcgi.a

EXECS = $(UMLTESTS) $(UMLCGI)

LIBS = $(MLCGI)

ALL = $(EXECS)

#Regra implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL) $(UMLCGIS)

umltestgetlanguageindex: $(UMLTESTGETLANGUAGEINDEXOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETLANGUAGEINDEXOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestgetclierrormessage: $(UMLTESTGETCLIERRORMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCLIERRORMESSAGEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestgetweberrormessage: $(UMLTESTGETWEBERRORMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETWEBERRORMESSAGEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestgetcliuserinterfacemessage: $(UMLTESTGETCLIUSERINTERFACEMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCLIUSERINTERFACEMESSAGEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestgetwebuserinterfacemessage: $(UMLTESTGETWEBUSERINTERFACEMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETWEBUSERINTERFACEMESSAGEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestcheckstringfield: $(UMLTESTCHECKSTRINGFIELDOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCHECKSTRINGFIELDOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestchecknickname: $(UMLTESTCHECKNICKNAMEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCHECKNICKNAMEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestcheckemail: $(UMLTESTCHECKEMAILOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCHECKEMAILOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestcreaterandomstring: $(UMLTESTCREATERANDOMSTRINGOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCREATERANDOMSTRINGOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestcreatenickname: $(UMLTESTCREATENICKNAMEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCREATENICKNAMEOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestgetcryptalgorithm: $(UMLTESTGETCRYPTALGORITHMOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCRYPTALGORITHMOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestencodepasswordwithspecificalgorithm: $(UMLTESTENCODEPASSWORDWITHSPECIFICALGORITHMOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTENCODEPASSWORDWITHSPECIFICALGORITHMOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestencodepasswordwithspecificsalt: $(UMLTESTENCODEPASSWORDWITHSPECIFICSALTOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTENCODEPASSWORDWITHSPECIFICSALTOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)

umltestcheckpassword: $(UMLTESTCHECKPASSWORDOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTCHECKPASSWORDOBJ) -lcrypt
	cp $@ $@-$(OS)-$(CC)


umlMain.cgi: $(UMLCGIMAINOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLCGIMAINOBJ) -L Libraries/Ubuntu -lmlcgi
	sudo cp $@ /usr/lib/cgi-bin/$@


clean:
	rm -f *.o *.cgi $(ALL)

clean-all:
	rm -f *.o *.cgi $(ALL) *-FreeBSD-* *-Linux-*

clean-freebsd:
	rm -f *.o *.cgi$(ALL) *-FreeBSD-*

clean-linux:
	rm -f *.o *.cgi$(ALL) *-Linux-*

clean-apache:
	sudo rm /usr/lib/cgi-bin/*.cgi  -f

clean-troll:
	rm -f *.o *.cgi $(ALL) *-FreeBSD-* *-Linux-*
	sudo rm /usr/lib/cgi-bin/*.cgi  -f

install:
	mkdir -p $(UML_PRIVATE_ROOT_DIRECTORY)/Binaries
	mkdir -p $(UML_PRIVATE_ROOT_DIRECTORY)/Data
	mkdir -p $(UML_PRIVATE_ROOT_DIRECTORY)/Data/Cookies
	mkdir -p $(UML_PUBLIC_HTML_DIRECTORY)
	cp $(UML_PRIVATE_ROOT_DIRECTORY)/Sources/HTML/index_pt-br.html $(UML_PUBLIC_HTML_DIRECTORY)
	cp $(UML_PRIVATE_ROOT_DIRECTORY)/Sources/HTML/index_en-us.html $(UML_PUBLIC_HTML_DIRECTORY)
	ln -s $(UML_PUBLIC_HTML_DIRECTORY)/index_en-us.html $(UML_PUBLIC_HTML_DIRECTORY)/index.html
	make uml
	make umlCgis
	make clean

# Deinstalls the library tests system
deinstall:
	make clean
	rm -f $(UML_PUBLIC_HTML_DIRECTORY)/*
	rmdir $(UML_PUBLIC_HTML_DIRECTORY)
	rm -f $(UML_PRIVATE_ROOT_DIRECTORY)/Binaries/*
	rmdir $(UML_PRIVATE_ROOT_DIRECTORY)/Binaries
	rm -f $(UML_PRIVATE_ROOT_DIRECTORY)/Data/Cookies/*
	rmdir $(UML_PRIVATE_ROOT_DIRECTORY)/Data/Cookies
	rm -f $(UML_PRIVATE_ROOT_DIRECTORY)/Data/*
	rmdir $(UML_PRIVATE_ROOT_DIRECTORY)/Data

# $RCSfile: GNUmakefile,v $