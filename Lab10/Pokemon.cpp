/* -----------------------------------------------------------------------------
 *
 * File Name:  Pokemon.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program will create Pokemon object.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
#include "Pokemon.h"

Pokemon::Pokemon(int id, string us, string jp)
{
    setID(id);
    setUS(us);
    setJP(jp);
}
Pokemon::Pokemon()
{
    this->ID=0;
    this->US="";
    this->JP="";
}

Pokemon::~Pokemon() {}

void Pokemon::setID(int id)
{
    this->ID=id;
}

int Pokemon::getID()const
{
    return this->ID;
}

void Pokemon::setUS(string us)
{
    this->US = us;
}

string Pokemon::getUS()const
{
    return this->US;
}

void Pokemon::setJP(string jp)
{
    this->JP=jp;
}

string Pokemon::getJP()const
{
    return this->JP;
}


bool Pokemon:: operator<(const Pokemon& other)const
{
    return (this->ID < other.getID());       
}

bool Pokemon:: operator> (const Pokemon& other)const
{
    return (this->ID>other.getID());       
}

bool Pokemon:: operator== (const Pokemon& other)const
{
    return (this->ID==other.getID());       
}

bool Pokemon:: operator< (const int key)const
{
    return (this->ID < key);       
}

bool Pokemon:: operator> (const int key)const
{
    return (this->ID>key);       
}

bool Pokemon:: operator== (const int key)const
{
    return (this->ID==key);       
}
