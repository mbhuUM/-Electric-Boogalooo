CC=g++ -g -Wall -std=c++17

# SOURCES=main.cpp src/pomodoro.cpp src/timer.cpp

all: PomodoroTimer

DEPS = dependencies/pomodoro.h dependencies/timer.h
OBJ = main.o pomodoro.o timer.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

PomodoroTimer: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) PomodoroTimer