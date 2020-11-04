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

UMLCGI = umlcgimain

MLLIB = libmlcgi.a

EXECS = $(UMLTESTS) $(UMLCGI)

LIBS = $(MLLIB)

ALL = $(EXECS) $(LIBS)

#Regra implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

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


umlCgiMain.cgi: $(UMLCGIMAINOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLCGIMAINOBJ)
	sudo cp $@ /usr/lib/cgi-bin/$@


clean:
	rm -f *.o *.cgi $(ALL) $(LIBS)

clean-all:
	rm -f *.o *.cgi $(ALL) $(LIBS) *-FreeBSD-* *-Linux-*

clean-freebsd:
	rm -f *.o *.cgi$(ALL) $(LIBS) *-FreeBSD-*

clean-linux:
	rm -f *.o *.cgi$(ALL) $(LIBS) *-Linux-*

clean-apache:
	sudo rm /usr/lib/cgi-bin/*.cgi  -f

clean-troll:
	rm -f *.o *.cgi $(ALL) $(LIBS) *-FreeBSD-* *-Linux-*
	sudo rm /usr/lib/cgi-bin/*.cgi  -f

# $RCSfile: GNUmakefile,v $