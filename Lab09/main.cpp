/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 09
 * Description:  This program will run the program.
 * Date Last modified: 11/30/2021
 *
 ---------------------------------------------------------------------------- */
#include "Executive.h"
#include<iostream>
using namespace std;


int main(int argc, char**argv )
{
    if (argc > 1)
    {
        Executive exec(argv[1]);
        exec.run();
    }
    else
    {
        cout<<"ERROR!\n";
    }
   
}
