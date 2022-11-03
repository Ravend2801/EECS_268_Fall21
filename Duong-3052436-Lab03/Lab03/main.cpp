/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode.  
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include<iostream>
#include "StackTester.h"
#include "StackParser.h"
#include<cstring>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Incorrect number of parameters!\n";
    }

    else
    {
        if (strcmp(argv[1], "-t") == 0)
        {
            StackTester Tests;
            Tests.runTests();
        }
        if (strcmp(argv[1], "-p") == 0)
        {
            StackParser Parser;
            string s;
            cout << "Enter your sequence: ";
            cin >> s;
            if (Parser.CheckBalance(s))
            {
                cout << "Sequence is balanced.";
            }
            else
            {
                cout << "Sequence is not balanced.";
            }
            cout<<'\n';
        }
    }
    return (0);
}

