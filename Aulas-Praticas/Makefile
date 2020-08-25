#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica de Computacao
#EEL270 - Computacao II - Turma 2018/2
#Prof. Marcelo Luiz Drumond Lanza
#Autor: Lucas de Queiroz dos Reis

CC = gcc
LD = gcc

CFLAGS = -Wall
LFLAGS = -Wall

AULA0101OBJS = aula0101.o

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
	rm -f *.0 $(ALL)