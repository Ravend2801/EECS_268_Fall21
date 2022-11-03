/** -----------------------------------------------------------------------------
 *
 * @file Rectangle.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include"Rectangle.h"

rectangle::rectangle(double length, double width)
{
    m_length = length; 
    m_width = width;
}

double rectangle::area() const
{
    return(m_length * m_width);
}

std::string rectangle::shapeName() const
{
    return("Rectangle");
}
