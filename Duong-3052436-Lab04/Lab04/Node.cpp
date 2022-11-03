/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create node .
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

template <typename T>
Node<T>::Node(T entry)
{
	m_entry = entry;
	m_next = nullptr;
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
