/* -----------------------------------------------------------------------------
 *
 * File Name: LinkedList.h
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <typename T>
class LinkedList
{
public:
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assign initial value for each variable in protected part
       * @return none
       **/
    LinkedList();
    /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete linked list
       * @return none
       **/
    virtual ~LinkedList();

    /**
        * @pre The index is valid
        * @post The entry is added to the list at the index, increasing length by 1
        * @param index, position to insert at (1 to length+1)
        * @param entry, value/object to add to the list
        * @throw std::runtime_error if the index is invalid
        */
    void insert(int index, T entry);

    /**
        * @pre The index is valid
        * @post The entry at given position is removed, reducing length by 1 
        * @param index, position to remove at (1 to length)
        * @throw std::runtime_error if the index is invalid
        */
    void remove(int index);

    /**
        * @pre The index is valid
        * @post None 
        * @param index, position to get entry at (1 to length)
        * @throw std::runtime_error if the index is invalid
        */
    T getEntry(int index) const;
    /**
        * @pre None
        * @post None 
        * @throw None
        * @return m_lenght
        */
    int length() const;

    /**
        * @pre None
        * @post List is empty
        * @throw None
        */
    void clear();

    /**
        * @pre The index is valid (must already exist)
        * @post Given entry overrides the entry at the given index 
        * @param index, position to override at (1 to length)
        * @param entry, value/object to place at given index
        * @throw std::runtime_error if the index is invalid
        */
    void setEntry(int index, T entry);
    /**
        * @pre None
        * @post None 
        * @throw None
        * @return m_front
        */
    Node<T> *getFront();

protected:
    int m_length;
    Node<T> *m_front;
};

#endif
