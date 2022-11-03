/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 4
 * @brief This file defines the Executive class. It is able to read the text file
* and run the program.
 * @date 10/07/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include "Stack.h"
#include "Queue.h"
#include "Node.h"
#include <string>
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

using namespace std;

class Executive 
{
    public:
        string m_fileName;
        
        /**
		* @pre fileName is valid
		* @post constructor-initialize the string m_fileName
		* @param string fileName
		* @throw none
		* @return none
		**/
        Executive(string fileName);

        /**
		* @pre none
		* @post destructor
		* @param none
		* @throw none
		* @return none
		**/
        ~Executive();
		
		/**
		* @pre none
		* @post It is able to read the text file and run the program.
		* @param none
		* @throw none
		* @return none
		**/
		void run();

};

#endif

