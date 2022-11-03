/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 7
 * @brief This header file defines the Executive class.
 * @date 11/05/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include<iostream>
#include<fstream>
#include<string>


using namespace std;

class Map
{
    private:
    char** m_citymap;
    int m_rows, m_cols; 
    int m_start_row, m_start_col; 
    bool m_is_sewers;
    int people_eaten = 0;

    public:
    Map(ifstream& inFile);
    ~Map();
    void BlobSpreading();
    void CityMap(int start_row, int start_col);
    void print();
    int CountEatenPeople();

};

#endif
