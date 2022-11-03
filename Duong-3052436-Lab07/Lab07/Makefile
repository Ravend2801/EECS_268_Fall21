lab07: main.o Executive.o
	g++ -std=c++11 -g -Wall Executive.o main.o -o lab07

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean: 
	rm *.o lab07
