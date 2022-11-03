/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Node.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include "LinkedList.cpp"

class Executive
{

public:
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assign pointer
       * @return none
       **/
    Executive();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete pointer
       * @return none
       **/
    ~Executive();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post run lab
       * @return none
       **/
    void run();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post pop stack
       * @return none
       **/
    void StackPop();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post destruct stack
       * @return none
       **/
    void StackDestructor();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post enqeue queue
       * @return none
       **/
    void QueueEnqueue();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assess the first index of LinkedList
       * @return none
       **/
    void LinkedListEntry1();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assess the last index of LinkedList
       * @return none
       **/
    void LinkedListEntryLast();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assess the LinkedList by getEntry function
       * @return none
       **/
    void LinkedListPrint();

private:
    Stack<int> *myStack1;
    Stack<int> *myStack2;
    Queue<int> *myQueue;
    LinkedList<int> *myList1;
    LinkedList<int> *myList2;
    LinkedList<int> *myList3;
};
#endif
