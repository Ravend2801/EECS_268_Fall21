/** -----------------------------------------------------------------------------
 *
 * @file  StackOfChars.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include"StackOfChars.h"
#include<cstddef>

StackOfChars::StackOfChars()
{
    m_top = nullptr;
}

StackOfChars::~StackOfChars()
{
    while(!isEmpty())
    {
        pop();
    }
}
void StackOfChars::push(char entry)
{
    Node* temp = new Node(entry);
    temp -> setNext(m_top);
    m_top = temp;
}

void StackOfChars::pop()
{
    if(!isEmpty())
    {
        Node *oldtop = m_top;
        m_top = m_top -> getNext();
        delete(oldtop);
    }
}

char StackOfChars::peek() const
{
    return m_top -> getEntry();
}

bool StackOfChars::isEmpty() const
{
    return(m_top == nullptr);
}


