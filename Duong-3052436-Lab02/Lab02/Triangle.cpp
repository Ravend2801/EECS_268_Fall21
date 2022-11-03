/** -----------------------------------------------------------------------------
 *
 * @file Triangle.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include"Triangle.h"

triangle::triangle(double height, double base)
{
    m_height = height;
    m_base = base;
}

double triangle::area() const
{
    return((1.0/1.2) * m_height * m_base);
}

std::string triangle::shapeName() const
{
    return("Triangle");
}
