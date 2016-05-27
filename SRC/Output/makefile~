CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: output

debug: CC += -DDEBUG -g
debug: executable

quadTest:	Quad/quadTest.c Quad/quad.c
	${CC} -o quadTest quadTest.c quad.c ${LIBS}
	./quadTest

output:	output.c outputTest.c
	${CC} -o outputTest output.c outputTest.c ${LIBS}
	./inputTest