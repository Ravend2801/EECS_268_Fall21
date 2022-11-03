/* -----------------------------------------------------------------------------
 *
 * File Name:  Executive.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 00
 * Description:  This program will run the program.
 * Date Last modified: 11/30/2021
 *
 ---------------------------------------------------------------------------- */

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Pokemon.h"
#include "BST.h"


class Executive
{
    private:
    BST<Pokemon>* m_PokeTree;
        string FileName;
        static void printPoke(Pokemon poke);
    public:
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assign pointer
       * @return none
       **/
        Executive(string FileName);

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete pointer
       * @return none
       **/
        ~Executive();

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post run cases
       * @return none
       **/
        void run();

         /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post read input file
       * @return none
       **/
        void read();

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print menu
       * @return none
       **/
      void printMenu();
        

};
#endif
