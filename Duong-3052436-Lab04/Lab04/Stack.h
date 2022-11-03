/** -----------------------------------------------------------------------------
 *
 * @file  Stack.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create stack.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef STACK_H
#define STACK_H

#include"StackInterface.h"
#include"Node.h"

template <typename T>
class Stack : public StackInterface<T>
{
    private:
    Node<T>* m_top;

    public:
    Stack();
    ~Stack();
    Stack(const Stack<T>&orig);
    void operator = (const Stack<T>& rhs);
    virtual void push(T entry);
    virtual void pop();
    virtual bool isEmpty() const; 
    virtual T peek() const; 
};

#include"Stack.cpp"
#endif
