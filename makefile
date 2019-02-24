FILE = Blink
CC = g++
FLAGS = -Wall -lwiringPi -std=c++17

build: *.cpp
	$(CC) $(FLAGS) *.cpp -o $(FILE).out
