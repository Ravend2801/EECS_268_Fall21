/** -----------------------------------------------------------------------------
 *
 * @file  StackPraser.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef STACK_PARSER_H
#define STACK_PARSER_H
#include "StackOfChars.h"
#include<string>

using namespace std; 

class StackParser
{
    public:
    bool CheckBalance(string s);
};

#endif
