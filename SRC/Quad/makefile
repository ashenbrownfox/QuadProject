CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: quadTest

debug: CC += -DDEBUG -g
debug: executable

quadTest: quadTest.c quad.c
	${CC} -o quadTest quadTest.c quad.c ${LIBS}
	./quadTest
