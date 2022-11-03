/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 3
 * @brief This program will make a Stack, then implement the stacks, make it run 
 * in 2 modes, test mode and parser mode.  
 * @date 09/30/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef NODE_H
#define NODE_H

class Node
{
	private:
	char m_entry;
	Node* m_next;
	
	public:
	Node(char entry);
	char getEntry() const;
	void setEntry(char entry);
	Node* getNext() const;
	void setNext(Node* next);

};
#endif
