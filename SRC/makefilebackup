CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: executable

debug: CC += -DDEBUG -g
debug: executable

quadTest:	quadTest.c quad.c
	${CC} -o quadTest quadTest.c quad.c ${LIBS}
	./quadTest

executable:	main.c quad.c input.c output.c
	${CC} -o demo main.c quad.c input.c output.c ${LIBS}
	./demo
