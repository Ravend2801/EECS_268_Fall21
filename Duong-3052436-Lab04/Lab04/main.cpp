/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This file is in charge of implementing the main program.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include <iostream>
#include "Executive.h"
#include <string>

using namespace std;

int main(int argc, char** argv) 
{

    if (argc < 2) 
	{
		cout << "ERROR: Not enough argument.\n";
        exit(0);
    } else 
    {
        string fileName = argv[1];
		
		if(fileName=="input.txt")
		{
			Executive lab4(fileName);
			lab4.run();
		}
		else 
		{
            cout<<"ERROR: Invalid command line argument\n";
		}
	}
    
    return(0);
}

