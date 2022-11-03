#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListInterface.h"
#include "Node.h"

template <typename T>
class LinkedList : public ListInterface<T>
{
public:
    LinkedList();
    virtual ~LinkedList();

    Node<T> *getFront();

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

protected:
    int m_length;
    Node<T> *m_front;
};

#include "LinkedList.cpp"

#endif
