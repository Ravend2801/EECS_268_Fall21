/** -----------------------------------------------------------------------------
 *
 * @file ShapeContainer.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include"ShapeContainer.h"
#include<string>

ShapeContainer::ShapeContainer(int size)
{
    m_size = size; 
    m_arrayOfShapes = new Shape*[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_arrayOfShapes = nullptr; 
    }

}

ShapeContainer::~ShapeContainer()
{
    for(int i=0; i<m_size;i++){
        if(m_arrayOfShapes != nullptr){
            delete m_arrayOfShapes[i];
            m_arrayOfShapes = nullptr; 
        }
    }
    delete [] m_arrayOfShapes;
}

double ShapeContainer::area(int index) const
{
    if(index >= 0 && index < m_size)
    {
        if(m_arrayOfShapes[index] != nullptr)
        {
            return m_arrayOfShapes[index] -> area(); 
        }
        else
        {
            throw std::runtime_error("DNE"); 
        }
    }  
}

std::string ShapeContainer::shapeName(int index) const
{
    if(index >= 0 && index < m_size)
    {
        if(m_arrayOfShapes[index] != nullptr)
        {
            return m_arrayOfShapes[index] -> shapeName();
        }
        else
        {
            throw std::runtime_error("DNE"); 
        }
    }
}

void ShapeContainer::add(Shape* shapePtr, int index)
{
    if(index >= 0 && index < m_size && shapePtr != nullptr)
    {
        if(m_arrayOfShapes[index] != nullptr)
        {
            delete m_arrayOfShapes[index]; 
            m_arrayOfShapes[index] = shapePtr;
        }
        else
        {
            throw std::runtime_error("DNE");
        }
        
    }
}

void ShapeContainer::remove(int index)
{
    if(index >= 0 && index < m_size)
    {
        if(m_arrayOfShapes[index] != nullptr)
        {
            delete m_arrayOfShapes[index];
            m_arrayOfShapes[index] = nullptr;
        }
        else
        {
            throw std::runtime_error("DNE");
        }
        
    }else
    {
        throw std::runtime_error("DNE");
    }
    
}


