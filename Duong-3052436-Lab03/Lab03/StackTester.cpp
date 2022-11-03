/** -----------------------------------------------------------------------------
 *
 * @file  StackTester.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include "StackOfChars.h"
#include "StackTester.h"
#include <iostream>
using namespace std;
StackTester::StackTester() {}

void StackTester::runTests() {
    test01();
    test02();
    test03();
}

void StackTester:: test01() {
    cout<<"Test #1: New stack is empty: ";
    StackOfChars stack ;
    if(stack.isEmpty()) {
        cout<<"PASSED";
    }
    else {
        cout<<"FAILED";
    }
    cout<<'\n';
}

void StackTester::test02() {
    cout<<"Test #2: Push on empty stack makes it non-empty: ";
    StackOfChars Stack ;
    Stack.push('1');
    if(!Stack.isEmpty()) {
        cout<<"PASSED";
    }
    else {
        cout<<"FAILED";
    }
    cout<<'\n';
}

void StackTester::test03() {
    cout<<"Test #3: Popping all all elements makes stack empty: ";
    StackOfChars stack ;
    stack.push('1');
    stack.pop();
    if(stack.isEmpty()) {
        cout<<"PASSED";
    } 
    else {
        cout<<"FAILED";
    }       
    cout<<'\n';
}

