/** -----------------------------------------------------------------------------
 *
 * @file Rectangle.h
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<string>
#include"Shape.h"

class rectangle: public Shape
{
    private:
    double m_length, m_width; 

    public:
    rectangle(double length, double width);
    double area() const; 
    std::string shapeName() const; 
};

#endif
