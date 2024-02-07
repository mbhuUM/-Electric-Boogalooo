CC=g++ -g -Wall -std=c++17

SOURCES=main.cpp

all: main

TIMER_OBJS=${SOURCES:.cpp=.o}

# Generic rules for compiling a source file to an object file
%.o: %.cpp
	${CC} -c $<
%.o: %.cc
	${CC} -c $<

clean:
	rm -f ${TIMER_OBJS} main
