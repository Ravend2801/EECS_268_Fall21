/** -----------------------------------------------------------------------------
 *
 * @file  Stack.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create stack.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

template <typename T>
Stack<T>::Stack()
{
   m_top = nullptr;
}

template <typename T>
Stack<T>::Stack(const Stack<T> &orig)
{
   Node<T> *jumper = orig.m_top;

   m_top = NULL;
   Node<T> *temp = m_top;
   m_top = NULL;

   while (jumper != nullptr)
   {
      if (m_top == NULL)
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

   while (m_top != NULL)
   {
      pop();
   }

   Node<T> *jumper = rhs.m_top;

   m_top = NULL;
   Node<T> *temp = m_top;
   m_top = NULL;

   while (jumper != nullptr)
   {
      if (m_top == NULL)
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
      throw(std::runtime_error("Peek called on empty stack"));
   }
}
template <typename T>
bool Stack<T>::isEmpty() const
{
   return (m_top == NULL);
}

