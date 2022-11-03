/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 7
 * @brief This file is in charge of implementing the main program.
 * @date 11/05/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.
#include <iostream>
#include <fstream>
#include "Executive.h"
using namespace std;

int main(int argc, char** argv)
{
    ifstream inFile;
    if (argc < 2)
        {
            cout << "ERROR: Not enough argument.\n";
        exit(0);
    }

    inFile.open(argv[1]);
    if(inFile.is_open())
    {
        Map myMap(inFile);
        myMap.BlobSpreading();
        myMap.print();
        cout << "Total eaten: " << myMap.CountEatenPeople() << endl;
    }
    else
    {
        cout << "Invalid file. \n";
    }

    return(0);
}
