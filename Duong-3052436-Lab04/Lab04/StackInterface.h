/** -----------------------------------------------------------------------------
 *
 * @file  StackInterface.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create stack.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef STACK_INTERFACE_H
#define STACK_INTERFACE_H

template <typename T>
class StackInterface
{
	public:
	virtual ~StackInterface(){};
	virtual bool isEmpty() const = 0;
	virtual void push(T entry) = 0;
	virtual void pop() = 0;
	virtual T peek() const = 0;
};

#endif
