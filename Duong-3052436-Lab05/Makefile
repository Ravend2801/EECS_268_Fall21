lab05: main.o  Browser.o Executive.o
	g++ -std=c++11 -g -Wall  Browser.o Executive.o main.o -o lab05

main.o: main.cpp Node.h ListInterface.h LinkedList.h BrowserHistoryInterface.h Browser.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

# Node.o: Node.h Node.cpp
# 	g++ -std=c++11 -g -Wall -c Node.cpp

# LinkedList.o: LinkedList.h LinkedList.cpp
# 	g++ -std=c++11 -g -Wall -c LinkedList.cpp

Browser.o: Browser.h Browser.cpp
	g++ -std=c++11 -g -Wall -c Browser.cpp
		
Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean: 
	rm *.o lab05
