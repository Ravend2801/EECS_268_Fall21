/** -----------------------------------------------------------------------------
 *
 * @file  StackOfChars.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode. 
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef STACKOFCHARS_H
#define STACKOFCHARS_H

#include"StackInterface.h"
#include"Node.h"

//Our stack will implement the StackInterface but of a stack specifically filled with chars.
//We'll learn in lecture how to make a templated Node and then a templated Stack
class StackOfChars : public StackInterface<char> 
{
	private:
	Node* m_top;
	
	public:
	
	StackOfChars();

	StackOfChars(const StackOfChars& orig);

        ~StackOfChars();

	void operator=(const StackOfChars& rhs);
	
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @param entry, the element to be added to the stack
       * @throw None
       **/
	void push(char entry);
	
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre Stack is non-empty
       * @post Top element is removed from the stack
       * @param None
       * @throw std::runtime_error if pop attempted on empty stack
       **/
	void pop();
	
	char peek() const; //should peek throw an exception?
	bool isEmpty() const;

};
#endif
