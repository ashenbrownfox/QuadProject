CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: output

debug: CC += -DDEBUG -g
debug: executable

output:	output.c outputTest.c
	${CC} -o outputTest output.c outputTest.c ${LIBS}
	./outputTest
