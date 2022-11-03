/** -----------------------------------------------------------------------------
 *
 * @file executive.h
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "ShapeContainer.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <fstream>
#include <cstring>

class Executive
{
    private:
    char *FileName; 
    int quit = 0;  

    public:
    ifstream inFile;
    void run();
    Executive(char *FileName);
    
};

#endif
