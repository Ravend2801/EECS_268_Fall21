/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 7
 * @brief This file is in charge of implementing the member
 * @date 11/05/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.
#include"Executive.h"
#include<iostream>
using namespace std;

Map::Map(ifstream& inFile)
{
    char temp;
    inFile >> m_rows >> m_cols >> m_start_row >> m_start_col;
    m_citymap = new char*[m_rows];
    for (int i = 0; i < m_rows; i++)
    {
        m_citymap[i] = new char[m_cols];
    }

    for (int i = 0; i < m_rows; i++)
    {
            for (int j = 0; j < m_cols; j++)
            {
                inFile >> temp;
                m_citymap[i][j] = temp;
            }
    }
}

Map::~Map()
{
    for(int i = 0; i < m_rows; i++)
    {
        delete[] m_citymap[i];
    }
    delete[] m_citymap;
}

void Map::BlobSpreading()
{
    CityMap(m_start_row, m_start_col);
    if(m_is_sewers == true)
    {
        for(int i= 0; i<m_rows; i++)
        {
            for(int j=0; j<m_cols; j++)
            {
                if(m_citymap[i][j] == '@')
                {
                    CityMap(i,j);
                }
            }
        }
    }
}

void Map::CityMap(int start_row, int start_col)
{
    if(start_row >= 0 && start_row < m_rows && start_col >= 0 && start_col < m_cols && m_citymap[start_row][start_col] != '#')
    {
        if(m_citymap[start_row][start_col] == 'P' || m_citymap[start_row][start_col] == 'S' || m_citymap[start_row][start_col] == '@')
        {
            if(m_citymap[start_row][start_col] == 'P')
            {
                people_eaten++;
                m_citymap[start_row][start_col] = 'B';
            }
            else if(m_citymap[start_row][start_col] == 'S')
            {
                m_citymap[start_row][start_col] = '1';
            }
            else if(m_citymap[start_row][start_col] == '@')
            {
                m_citymap[start_row][start_col] = '@';
                m_is_sewers = true;
            }
            CityMap(start_row - 1,start_col );
            CityMap(start_row, start_col + 1);
            CityMap(start_row + 1, start_col);
            CityMap(start_row, start_col - 1);
        }
    }
}

void Map::print()
{
    cout << m_rows << " " << m_cols <<"\n";
    cout << m_start_row << " " << m_start_col << "\n";
    for(int i = 0; i<m_rows; i++)
    {
        for(int j=0; j<m_cols; j++)
        {
            if(m_citymap[i][j] == '1')
            {
                m_citymap[i][j] = 'B';
            }
            cout << m_citymap[i][j];
        }
        cout << endl;
    }
}

int Map::CountEatenPeople()
{
    return(people_eaten);
}
