/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
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
#include "Node.h"

Node::Node(char entry)
{
    m_entry = entry; 
    m_next = nullptr;
}

char Node::getEntry() const
{
    return(m_entry);
}

void Node::setEntry(char entry)
{
    m_entry = entry;
}

Node* Node::getNext() const
{
    return(m_next);
}

void Node::setNext(Node* next)
{
    m_next = next;
}

