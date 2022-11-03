/* -----------------------------------------------------------------------------
 *
 * File Name: Stack.h
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef STACK_H
#define STACK_H

#include <stdexcept>
#include "Node.h"

template <typename T>
class Stack
{
public:
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post node is added to stack
       * @return add the node in the stack
       **/

       Stack();
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre have a stack
       * @post delete all the node in stack
       * @return none
       **/
       ~Stack();
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post copy node to new stack
       * @return none
       **/

       Stack(const Stack<T> &orig);
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post copy node to new stack
       * @return none
       **/

       void operator=(const Stack<T> &rhs);
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @param entry, the element to be added to the stack
       * @throw None
       **/

       void push(T entry);
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre Stack is non-empty
       * @post Top element is removed from the stack
       * @param None
       * @throw None  
       **/
       void pop();
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return return node
       **/
       T peek() const;
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post change node to Null
       * @return none
       **/

       bool isEmpty() const;

       void print();

private:
       Node<T> *m_top;
};

#endif
