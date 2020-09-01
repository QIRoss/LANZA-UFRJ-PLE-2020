#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica de Computacao
#EEL270 - Computacao II - Turma 2020/4
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
CC = CLANG
endif

LD = $(CC)
CFLAGS = -Wall -std=c11
LFLAGS = -Wall -std=c11

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o
AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o

AULA01 = aula0101\
	aula0102\
	aula0103\
	aula0104\
	aula0105\

AULA02 = aula0202a\
	aula0202b\
	aula0202c\
	aula0202d

EXECS = $(AULA01)\
		$(AULA02)

ALL = $(EXECS)

#Regra implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

aula01: $(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)
	cp $@ $@-$(OS)-$(CC)

aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)
	cp $@ $@-$(OS)-$(CC)

aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOJS)
	cp $@ $@-$(OS)-$(CC)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOJS)
	cp $@ $@-$(OS)-$(CC)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COJS)
	cp $@ $@-$(OS)-$(CC)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOJS)
	cp $@ $@-$(OS)-$(CC)

clean:
	rm -f *.o $(ALL)

clean-all:
	rm -f *.o $(ALL) *-FreeBSD-* *-Linux-*

clean-freebsd:
	rm -f *.o $(ALL) *-FreeBSD-*

# $RCSfile: GNUmakefile,v $