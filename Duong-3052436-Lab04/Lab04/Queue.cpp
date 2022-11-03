/** -----------------------------------------------------------------------------
 *
 * @file  Queue.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This program will create Queue.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

template <typename T>
Queue<T>::Queue()
{
    m_front = nullptr;
	m_back = nullptr;
}

template <typename T>
Queue<T>::~Queue()
{
	while(m_front!=NULL)
    {
        dequeue();
    }
}

template <typename T>
Queue<T>::Queue(const Queue<T>& orig)
{
	Node<T>* jumper = orig.m_front;
	
	m_front = nullptr;
	m_back = nullptr;
	
	while( jumper != nullptr )
	{
        enqueue(jumper->getEntry());
        jumper = jumper->getNext();
	}
}

template <typename T>
void Queue<T>::operator= (const Queue<T>& rhs)
{
	while( !isEmpty() )
	{
        dequeue();
	}
	
	Node<T>* jumper = rhs.m_front;
	while( jumper != nullptr )
	{
		enqueue(jumper->getEntry());
		jumper = jumper->getNext();
	}
}

template <typename T>
void Queue<T>::enqueue(T entry)
{
    Node<T>* newNode = new Node<T>(entry);
    if ( m_front==nullptr)
    {
        m_front=newNode;
        m_back=newNode;
    }
    else
    {
        m_back->setNext(newNode);
        m_back=m_back->getNext();
    }
    
}

template <typename T>
void Queue<T>::dequeue()
{
    if(m_front!=nullptr)
    {
        Node<T> *oldfront = m_front;
        m_front = oldfront->getNext();
        delete oldfront;
    }
}


template <typename T>
T Queue<T>::peekFront() const
{
    if( !isEmpty() )
	{
		return( m_front->getEntry() );	
	}
	else
	{
		throw( std::runtime_error("The queue is empty.") );
	}
}

template <typename T>
bool Queue<T>::isEmpty() const
{
    return(m_front == NULL);
}

template <typename T>
void Queue<T>::Print()
{
	Node<T>* temp = m_front;
	while(temp != nullptr)
    {
		cout<<temp -> getEntry().m_name<<" ";
		temp = temp -> getNext();
	}
	cout<<endl;
}


