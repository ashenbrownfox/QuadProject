CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: input

debug: CC += -DDEBUG -g
debug: executable

input:	input.c inputTest.c
	${CC} -o inputTest input.c inputTest.c ${LIBS}
	./inputTest
