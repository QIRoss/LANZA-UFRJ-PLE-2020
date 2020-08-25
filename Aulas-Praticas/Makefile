#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica de Computacao
#EEL270 - Computacao II - Turma 2020/4
#Prof. Marcelo Luiz Drumond Lanza
#Autor: Lucas de Queiroz dos Reis
#Description: Makefile

# $AUTHOR$
# $DATE$
# $LOG$

CC = gcc
LD = gcc

CFLAGS = -Wall
LFLAGS = -Wall

AULA0101OBJS = aula0101.o

AULA01 = aula0101\

EXECS = $(AULA01)\

ALL = $(EXECS)\

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

aula01: $(AULA01)

aula_0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
	
clean:
	rm -f *.o $(ALL)

# $RCSfile: Makefile,v $