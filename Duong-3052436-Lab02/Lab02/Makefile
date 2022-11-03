lab04: main.o Rectangle.o Circle.o Triangle.o ShapeContainer.o executive.o
	g++ -std=c++11 -g -Wall Rectangle.o Circle.o Triangle.o ShapeContainer.o executive.o main.o -o lab04

main.o: main.cpp Shape.h Rectangle.h Circle.h Triangle.h ShapeContainer.h executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Rectangle.o: Rectangle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Triangle.o: Triangle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp
		
executive.o: executive.h executive.cpp
	g++ -std=c++11 -g -Wall -c executive.cpp

clean: 
	rm *.o lab04
