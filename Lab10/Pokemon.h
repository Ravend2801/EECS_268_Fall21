/* -----------------------------------------------------------------------------
 *
 * File Name:  Pokemon.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program will create Pokemon object.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{
    private:
    int ID;
    string US;
    string JP;
    public:
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assign initial value
       * @return none
       **/
    Pokemon();
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post assign value
       * @return none
       **/
    Pokemon(int id, string us, string jp);
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post deconstructor
       * @return none
       **/
    ~Pokemon();
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set id
       * @return none
       **/
    void setID(int id);
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return id
       **/
    int getID()const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set Us name
       * @return none
       **/
    void setUS(string us);
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return Us name
       **/
    string getUS()const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set Jp name
       * @return none
       **/
    void setJP(string jp);
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return Jp name
       **/
    string getJP()const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare < (object with object)
       * @return none
       **/
    bool operator<(const Pokemon& other) const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare > (object with object)
       * @return none
       **/
    bool operator>(const Pokemon& other) const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare == (object with object)
       * @return none
       **/
    bool operator==(const Pokemon& other) const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare < (object with key)
       * @return none
       **/
    bool operator<(const int key) const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare > (object with key)
       * @return none
       **/
    bool operator>(const int key) const;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post compare == (object with key)
       * @return none
       **/
    bool operator==(const int key) const;
    
    
};
#endif
