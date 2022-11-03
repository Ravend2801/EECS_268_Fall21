lab04: main.o Executive.o 
	g++ -std=c++11 -g -Wall main.o Executive.o -o lab04

main.o: main.cpp Node.h Node.cpp Stack.h Stack.cpp Queue.h Queue.cpp 
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean: 
	rm *.o lab04


