/** -----------------------------------------------------------------------------
 *
 * @file Circle.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include"Circle.h"

circle::circle(double radius)
{
    m_radius = radius; 
}

double circle::area() const
{
    return(3.1416 * m_radius * m_radius);
}

string circle::shapeName() const
{
    return("Circle");
}
