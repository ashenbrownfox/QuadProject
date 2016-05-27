CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: main

debug: CC += -DDEBUG -g
debug: executable

quadTest:	Quad/quadTest.c Quad/quad.c
	${CC} -o quadTest quadTest.c quad.c ${LIBS}
	./quadTest

main:	main.c testMain.c ../Quad/quad.c ../Input/input.c ../Output/output.c
	${CC} -o testMain main.c testMain.c ${LIBS}
	./testMain