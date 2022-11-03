/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program in charge of implementing the member methods of the class 
 * defined in Executive.h
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include <iostream>
#include <fstream>
#include <string>
#include "Executive.h"

using namespace std;

Executive::Executive(string fileName) 
{
    m_fileName=fileName;
}

Executive::~Executive() 
{   
}

void Executive::run()
{
	ifstream myFile;
	myFile.open(m_fileName);
	if(!myFile.is_open())
	{
		throw(std::runtime_error("File was not opened!"));
	}
	
	Stack<string> Elevator;
	Queue<string> guessLine;
	string command;
	int numofPeople =0;
	int countPeople=0;
	
	while (myFile >> command)
	{
		if (command == "WAIT")
		{
			myFile >> command;
			guessLine.enqueue(command);
		}
		else if (command == "PICK_UP")
		{
			try
			{
				myFile >> numofPeople;
				for (int i = 0; i < numofPeople; i++)
				{	
					if(countPeople>=7)
					{
						throw(std::runtime_error("Enough people in elevator."));
					}
					if(guessLine.isEmpty())
					{
						throw(std::runtime_error("Not enough people in line to pick up.\n"));
					}
					Elevator.push(guessLine.peekFront());
					countPeople++;
					guessLine.dequeue();
				}
			}
			catch(std::runtime_error& rte)
			{
				cout << rte.what() << '\n';
			}
		}
		else if (command == "DROP_OFF")
		{
			try
			{
				myFile >> numofPeople;
				for (int i = 0; i < numofPeople; i++)
				{
					if(Elevator.isEmpty())
					{
						throw(std::runtime_error("Not enough people in the elevator to drop off."));
					}
					Elevator.pop();
					countPeople--;
				}
			}
			catch(std::runtime_error& rte)
			{
				cout << rte.what() << '\n'; 
			}
		}
		else if (command == "INSPECTION")
		{
			cout<<"Elevator status: \n";
			if (Elevator.isEmpty())
			{
				cout<<"The elevator is empty.\n";
                cout<<"No one is in the elevator.\n";
				try
                {
                    cout<<guessLine.peekFront()<<" will be the next person to get on the elevator.\n";

                }
                catch(std::runtime_error& rte)
				{
				    cout << rte.what() << '\n'; 
				}
			}
			else
			{
				cout<<"The elevator is not empty.\n";
				try
                {
                    cout<<Elevator.peek()<<" will be the next person to leave the elevator.\n";
                    cout<<guessLine.peekFront()<< " will be the next person to get on the elevator.\n";
                }
                catch(std::runtime_error& rte)
				{
				    cout << rte.what() << '\n'; 
				}
			}
		}	
	}
}

