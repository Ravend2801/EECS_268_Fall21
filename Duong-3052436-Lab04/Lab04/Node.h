/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create node .
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
	private:
	T m_entry;
	Node<T>* m_next;
	
	public:
	Node(T entry);
	T getEntry() const;
	void setEntry(T entry);
	Node<T>* getNext() const;
	void setNext(Node<T>* next);
};
#include "Node.cpp"
#endif


