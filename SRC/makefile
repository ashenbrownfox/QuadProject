CFLAGS= -std=c99 -w
#CFLAGS= -pedantic
#CFLAGS= -Wall
 
CC= gcc
LIBS = -lm

all:quadTest quadSolver

debug: CC += -DDEBUG -g
debug: quadSolver

quadTest:	./Quad/quadTest.c ./Quad/quad.c
	${CC} -o quadTest ./Quad/quadTest.c ./Quad/quad.c ${LIBS}
	./quadTest

quadSolver:	./Main/main.c ./Quad/quad.c ./Input/input.c ./Output/output.c
	${CC} ${CFLAGS} -o demo ./Main/main.c ./Quad/quad.c ./Input/input.c ./Output/output.c ${LIBS}
	./demo
