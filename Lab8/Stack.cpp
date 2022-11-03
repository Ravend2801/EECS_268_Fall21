/* -----------------------------------------------------------------------------
 *
 * File Name: Stack.cpp
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#include"Stack.h"
template <typename T>
Stack<T>::Stack()
{
   m_top = nullptr;
}

template <typename T>
Stack<T>::Stack(const Stack<T> &orig)
{
   Node<T> *jumper = orig.m_top;

   Node<T> *temp = m_top;
   m_top = nullptr;

   while (jumper != nullptr)
   {
      if (m_top == nullptr)
      {
         temp = new Node<T>(jumper->getEntry());
         m_top = temp;
         jumper = jumper->getNext();
      }
      else
      {
         temp->setNext(new Node<T>(jumper->getEntry()));
         temp = temp->getNext();
         jumper = jumper->getNext();
      }
   }
}

template <typename T>
Stack<T>::~Stack()
{
   while (m_top != nullptr)
   {
      pop();
   }
}

template <typename T>
void Stack<T>::operator=(const Stack<T> &rhs)
{
   if (this == &rhs)
      return;

   while (m_top != nullptr)
   {
      pop();
   }

   Node<T> *jumper = rhs.m_top;

   m_top = nullptr;
   Node<T> *temp = m_top;
   m_top = nullptr;

   while (jumper != nullptr)
   {
      if (m_top == nullptr)
      {
         temp = new Node<T>(jumper->getEntry());
         m_top = temp;
         jumper = jumper->getNext();
      }
      else
      {
         temp->setNext(new Node<T>(jumper->getEntry()));
         temp = temp->getNext();
         jumper = jumper->getNext();
      }
   }
}

template <typename T>
void Stack<T>::push(T entry)
{
   Node<T> *temp = new Node<T>(entry);
   if (m_top == nullptr)
   {
      m_top = temp;
   }
   else
   {
      m_top->setNext(temp);
      m_top = m_top->getNext();
   }
}

template <typename T>
void Stack<T>::pop()
{
   if (m_top != nullptr)
   {
      Node<T> *oldtop = m_top;
      m_top = m_top->getNext();
      delete (oldtop);
   }
}

template <typename T>
T Stack<T>::peek() const
{
   if (!isEmpty())
   {
      return (m_top->getEntry());
   }
   else
   {
      throw(std::runtime_error("Empty stack"));
   }
}
template <typename T>
bool Stack<T>::isEmpty() const
{
   return (m_top == nullptr);
}

template <typename T>
void Stack<T>::print()
{
   Node<T> *temp = m_top;
   while (temp != nullptr)
   {
      cout << temp->getEntry();
      temp = temp->getNext();
   }
}
