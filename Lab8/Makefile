lab08: main.o Node.o Stack.o Queue.o Executive.o
	g++ -std=c++11 -g -Wall Node.o Stack.o Queue.o Executive.o main.o -o lab08

main.o: main.cpp Node.h Stack.h Queue.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

Stack.o: Stack.h Stack.cpp
	g++ -std=c++11 -g -Wall -c Stack.cpp

Queue.o: Queue.h Queue.cpp
	g++ -std=c++11 -g -Wall -c Queue.cpp


Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp
		
clean: 
	rm *.o lab08