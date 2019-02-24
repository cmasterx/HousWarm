FILE = HousWarm
CC = g++
FLAGS = -Wall -Wextra -lwiringPi -std=c++17

build: *.cpp
	$(CC) $(FLAGS) *.cpp -o $(FILE).out
