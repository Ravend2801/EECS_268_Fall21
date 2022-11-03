/** -----------------------------------------------------------------------------
 *
 * @file Triangle.h
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<string>
#include"Shape.h"

class triangle: public Shape
{
    private:
    double m_height, m_base; 

    public:
    triangle(double height, double base); 
    double area() const; 
    std::string shapeName() const;
};


#endif
