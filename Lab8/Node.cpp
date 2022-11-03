/* -----------------------------------------------------------------------------
 *
 * File Name: Node.cpp
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#include"Node.h"
template <typename T>
Node<T>::Node(T entry)
{
	m_entry = entry;
	m_next = nullptr;
}

template <typename T>
Node<T>::~Node()
{
	delete m_next;
}

template <typename T>
T Node<T>::getEntry() const
{
	return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry)
{
	m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
	return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
	m_next = next;
}



