/** -----------------------------------------------------------------------------
 *
 * @file Shape.h
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
    public: 
    virtual double area() const = 0; 
    virtual string shapeName() const = 0;
    virtual ~Shape(){}
};

#endif


