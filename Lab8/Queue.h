/* -----------------------------------------------------------------------------
 *
 * File Name: Queue.h
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>
#include "Node.h"
// #include "Node.cpp"



template <typename T>
class Queue
{
	private:
	Node<T>* m_front;
	Node<T>* m_back;
	
	public:
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post node is added to queue
       * @return add the node in the queue
       **/

	Queue();
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre have a stack
       * @post delete all the node in queue
       * @return none
       **/

    ~Queue();
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post copy node to new queue
       * @return none
       **/

	Queue(const Queue<T>& orig);
	
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post copy node to new queue
       * @return none
       **/

	void operator= (const Queue<T>& rhs);	
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to back of the queue
       * @param entry, the element to be added to the queue
       * @throw None
       **/

	void enqueue(T entry);
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre queue is non-empty
       * @post Front element is removed from the queue
       * @param None
       * @throw None  
       **/

	void dequeue();
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return return node
       **/

	T peekFront() const;
	/** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post change node to Null
       * @return none
       **/
	bool isEmpty() const;
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all queue
       * @return none
       **/
	void Print();
};

#endif

