/** -----------------------------------------------------------------------------
 *
 * @file executive.cpp
 * @author Raven Duong 
 * @KUID: 3052436
 * Assignment:   EECS-268 Lab 2
 * @brief This program will use Shape interface to implement a Circle, Triagle,
 *  and Rectangle classes 
 * @date 09/23/2021
 *
 ---------------------------------------------------------------------------- **/

#include <iostream>
#include "executive.h"
#include <string>
using namespace std;

Executive::Executive(char *FileName)
{
    this->FileName = FileName;
}

void Executive::run()
{
    inFile.open(FileName);
    int size, index;
    double radius, length, width, height, base;
    string command, shape;
    if (inFile.is_open())
    {
        inFile >> size;
        cout << size << '\n';
        ShapeContainer Shapes(size);
        while (quit != 1)
        {
            try
            {
                inFile >> command;

                if (command == "ADD")
                {
                    inFile >> index >> shape;

                    if (shape == "CIRC")
                    {

                        inFile >> radius;
                        cout << command << radius;
                        Shapes.add(new circle(radius), index);
                    }

                    else if (shape == "TRI")
                    {
                        inFile >> base >> height;
                        Shapes.add(new triangle(base, height), index);
                    }
                    else if (shape == "REC")
                    {
                        inFile >> length >> width;
                        Shapes.add(new rectangle(length, width), index);
                    }
                }
                else if (command == "DELETE")
                {
                    inFile >> index;
                    Shapes.remove(index);
                }
                else if (command == "PRINT")
                {
                    inFile >> index;
                    cout << "Shape at index " << index << ": " << Shapes.shapeName(index) << " area = " << Shapes.area(index) << '\n';
                }
                else if (command == "EXIT")
                {
                    cout << "Exiting...\n";
                    quit = 1;
                }
            }
            catch (runtime_error &e)
            {
                cout << e.what() << '\n';
            }
        }
        inFile.close();
    }
    else
    {
        cout << "Cannot open file.";
    }
}

