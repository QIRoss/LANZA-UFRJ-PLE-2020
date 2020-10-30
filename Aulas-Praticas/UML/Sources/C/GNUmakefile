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

UMLTESTS = umltestgetlanguageindex\
	umltestgetclierrormessage\
	umltestgetweberrormessage\
	umltestgetcliuserinterfacemessage\
	umltestgetwebuserinterfacemessage\

EXECS = $(UMLTESTS)

LIBS =

ALL = $(EXECS) $(LIBS)

#Regra implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

umltestgetlanguageindex: $(UMLTESTGETLANGUAGEINDEXOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETLANGUAGEINDEXOBJ)
	cp $@ $@-$(OS)-$(CC)

umltestgetclierrormessage: $(UMLTESTGETCLIERRORMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCLIERRORMESSAGEOBJ)
	cp $@ $@-$(OS)-$(CC)

umltestgetweberrormessage: $(UMLTESTGETWEBERRORMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETWEBERRORMESSAGEOBJ)
	cp $@ $@-$(OS)-$(CC)

umltestgetcliuserinterfacemessage: $(UMLTESTGETCLIUSERINTERFACEMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCLIUSERINTERFACEMESSAGEOBJ)
	cp $@ $@-$(OS)-$(CC)

umltestgetwebuserinterfacemessage: $(UMLTESTGETWEBUSERINTERFACEMESSAGEOBJ)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETWEBUSERINTERFACEMESSAGEOBJ)
	cp $@ $@-$(OS)-$(CC)




clean:
	rm -f *.o $(ALL) $(LIBS)

clean-all:
	rm -f *.o $(ALL) $(LIBS) *-FreeBSD-* *-Linux-*

clean-freebsd:
	rm -f *.o $(ALL) $(LIBS) *-FreeBSD-*

clean-linux:
	rm -f *.o $(ALL) $(LIBS) *-Linux-*

# $RCSfile$