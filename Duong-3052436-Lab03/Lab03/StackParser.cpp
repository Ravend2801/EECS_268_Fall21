/** -----------------------------------------------------------------------------
 *
 * @file  StackPraser.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include"StackParser.h"

bool StackParser::CheckBalance(string s)
{
    StackOfChars Stack;
    char top; 
    for(unsigned int i=0;i<s.length();i++) {
        if (s[i] =='(' || s[i] =='{' ||s[i] =='[') {
            Stack.push(s[i]);
            continue;
        }
 
        if (Stack.isEmpty()) {
            return false;
        }
                   
        top = Stack.peek(); 
        Stack.pop();
        
        switch (s[i]) { 
        case ')': 
            if (top != '(') {
                return false; 
            }
            break;    
  
        case '}': 
            if (top != '{') {
                return false; 
            } 
            break;              
  
        case ']':  
            if (top != '[') {
                return false; 
            }
            break;
        } 
    } 
    return (Stack.isEmpty()); 
}
