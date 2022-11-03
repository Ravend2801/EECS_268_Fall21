template<typename T>
LinkedList<T>::LinkedList()
{
    this->m_front=nullptr;
    this->m_length=0;   
}


template<typename T>
void LinkedList<T>::insert(int index, T entry)
{
    if (index<1 || index>m_length+1)
    {
        throw std::runtime_error("Index out of range.");
    }else
    {
       Node<T> *temp = new Node<T>(entry);
        if (this->length() == 0)
        {
            m_front = temp;
        }
        else if (index == 1)
        {
            temp->setNext(m_front);
            m_front = temp;
        }
        else
        {
            Node<T> *temp1 = m_front;
            Node<T> *before = nullptr;
            Node<T> *after = nullptr;
            for (int i = 1; i <= index; i++)
            {
                if (i == index - 1)
                {
                    before = temp1;
                }
                else if (i == index)
                {
                    after = temp1;
                }
                if (i != index)
                {
                    temp1 = temp1->getNext();
                }
            }
            temp->setNext(after);
            before->setNext(temp);
        }
       
    m_length++;
    }
}

    


template <typename T>
void LinkedList<T>::remove(int index)
{
    if (index > m_length || index < 1)
    {
        throw std::runtime_error("Index out of range.");
    }
    else
    {
        if (index == 1)
        {
            Node<T> *temp = m_front;
            m_front = m_front->getNext();
            delete temp;
        }
        else
        {
            Node<T> *temp = m_front;
            Node<T> *before = m_front;
            for (int i = 1; i < index - 1; i++)
            {
                before = before->getNext();
            }
            temp = before->getNext();
            before->setNext(temp->getNext());
            delete temp;

        }
        m_length--;
        
    }
}

template <typename T>
T LinkedList<T>::getEntry(int index) const
{
    if (index > m_length || index < 1)
    {
        throw std::runtime_error("Index out of range.");
    }
    else
    {
        Node<T> *jumper = m_front;
        for (int i = 0; i < index - 1; i++)
        {
            jumper = jumper->getNext();
        }
        return (jumper->getEntry());
        
    }
}


template <typename T>
void LinkedList<T>::clear()
{
    while (this->m_length > 0)
    {
        remove(1);
    }
}

template <typename T>
void LinkedList<T>::setEntry(int index, T entry)
{
    if (index > m_length || index < 1)
    {
        throw std::runtime_error("Index out of range.");
    }
    else
    {
        Node<T> *temp = m_front;
        for (int i = 0; i < index ; i++)
        {
            temp = temp->getNext();
        }
        temp->setEntry(entry);
            
    }
}

template <typename T>
int LinkedList<T>::length() const
{
    return (this->m_length);
}

template <typename T>
Node<T>* LinkedList<T>::getFront(){
  return m_front;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
   clear();
}
