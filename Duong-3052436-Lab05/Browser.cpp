#include "Browser.h"

using namespace std;

Browser::Browser()
{
    
    this->index = 0;
    this->m_current = nullptr;
    m_list = new LinkedList<string>();
}

void Browser::navigateTo(std::string url)
{
    if (index == m_list->length())
    {
        index++;
        try
        {
            m_list->insert(index, url);
        }
        catch (runtime_error &e)
        {
            cout << e.what() << endl;
        }
    }
    else
    {
        try
        {
            
            m_list->setEntry(index + 1, url);
            
            
        }
        catch (runtime_error &e)
        {
            cout << e.what() << endl;
        }
        while (m_list->length() != index+1)
        {
            try
            {
                m_list->remove(m_list->length());
            }
            catch (runtime_error &e)
            {
                cout << e.what() << endl;
            }
        }
    }
    // cout << url <<index << endl;
    // cout << m_list -> length()<< endl; 
}

void Browser::forward()
{
    if (m_current->getNext() != nullptr)
    {
        if (index < m_list->length())
        {
            index++;
        }
        else
        {
            index = m_list->length();
        }
        m_current = m_current->getNext();
    }
}

void Browser::back()
{
    if (index > 0)
    {
        if (index == 1)
        {
            index = 1;
        }
        else
        {
            index--;
        }
        m_current = m_list->getFront();
        for (int i = 1; i < index; i++)
        {
            m_current = m_current->getNext();
        }
    }
}

string Browser::current() const
{
    return m_current->getEntry();
}

// void Browser::copyCurrentHistory(ListInterface<string> &destination)
void Browser::copyCurrentHistory()
{
    cout << "Oldest\n===========\n";
    for (int i = 1; i <= m_list->length(); i++)
    {
        if (i == index)
        {
            cout << m_list->getEntry(i) << " <== current";
        }
        else
        {
            cout << m_list->getEntry(i);
        }
        cout << '\n';
    }
    cout << "===========\nNewest";
    cout << '\n';
}


Browser::~Browser()
{
    m_list->clear();
    delete m_list;
}


