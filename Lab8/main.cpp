/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "Executive.h"

using namespace std;

int main(int argc, char**argv )
{
    if (argc > 1)
    {
        cout<<"ERROR";
    }else
    {
        Executive exec;
        exec.run();
    }
}
