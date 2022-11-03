lab10: main.o Executive.o Pokemon.o
	g++ -std=c++11 -g -Wall main.o Executive.o Pokemon.o -o lab10

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp Pokemon.h Pokemon.cpp BST.h BST.cpp BNode.h BNode.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Pokemon.o: Pokemon.h Pokemon.cpp BST.h BST.cpp BNode.h BNode.cpp
	g++ -std=c++11 -g -Wall -c Pokemon.cpp

clean: 
	rm *.o lab10
