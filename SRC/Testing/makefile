CFLAGS= -std=c99 -w
#CFLAGS= -pedantic
#CFLAGS= -Wall
 
CC= gcc
LIBS = -lm

all:quadTest

quadTest:	main.c quad.c test_driver.c mock_output.c
	${CC} ${CFLAGS} -o demo main.c quad.c test_driver.c mock_output.c ${LIBS}
