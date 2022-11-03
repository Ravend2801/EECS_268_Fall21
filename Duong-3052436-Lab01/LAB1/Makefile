LAB1: main.o Game.o Executive.o
	g++ -std=c++11 -g -Wall Game.o Executive.o main.o -o LAB1

main.o: main.cpp Game.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Game.o: Game.h Game.cpp
	g++ -std=c++11 -g -Wall -c Game.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp
		
clean: 
	rm *.o LAB1
