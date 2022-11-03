/** -----------------------------------------------------------------------------
 *
 * @file Cirlce.h
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef CIRCLE_H
#define CIRCLE_H
#include<string>
#include"Shape.h"

using namespace std;

class circle: public Shape 
{
    private:
    double m_radius; 

    public:
    circle(double radius);
    double area() const; 
    string shapeName() const; 

};

#endif
