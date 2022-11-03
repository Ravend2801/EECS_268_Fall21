/** -----------------------------------------------------------------------------
 *
 * @file  StackTester.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef STACK_TESTER_H
#define STACK_TESTER_H
#include "StackOfChars.h"

class StackTester
{   
    public: 

    StackTester();

    //This will call all your test methods
    void runTests();
     
    private:

    /**
    * @brief Creates an empty stack and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
    **/
    void test03();

    //more test methods as needed
};

#endif
