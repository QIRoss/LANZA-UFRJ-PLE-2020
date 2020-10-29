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
UMLTESTGETCLIERRORMESSAGE = umlErrors.o umlTestGetCliErrorMessage.o
UMLTESTGETWEBERRORMESSAGE = umlErrors.o umlTestGetWebErrorMessage.o

UMLTESTS = umltestgetlanguageindex\
	umltestgetclierrormessage\
	umltestgetweberrormessage

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

umltestgetclierrormessage: $(UMLTESTGETCLIERRORMESSAGE)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETCLIERRORMESSAGE)
	cp $@ $@-$(OS)-$(CC)

umltestgetweberrormessage: $(UMLTESTGETWEBERRORMESSAGE)
	$(LD) $(LFLAGS) -o $@ $(UMLTESTGETWEBERRORMESSAGE)
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