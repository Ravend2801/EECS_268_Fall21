/** -----------------------------------------------------------------------------
 *
 * @file  Queue.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create Queue. 
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>
#include "Node.h"
#include "Executive.h"

template <typename T>
class Queue
{
private:
       Node<T> *m_back;
       Node<T> *m_front;

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

       Queue(const Queue<T> &orig);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post copy node to new queue
       * @return none
       **/

       void operator=(const Queue<T> &rhs);
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

#include "Queue.cpp"
#endif
