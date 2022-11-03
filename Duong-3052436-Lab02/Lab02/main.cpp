/** -----------------------------------------------------------------------------
 *
 * @file main.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include<iostream>
#include "executive.h"
using namespace std;

int main(int argc,char *argv[])
{
    if (argc > 1) 
    {
        Executive exec(argv[1]);
        exec.run();
    }
    else
        cout << "ERROR!" << '\n';
    return 0;
}

