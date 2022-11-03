/* -----------------------------------------------------------------------------
 *
 * File Name:  BNode.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 09
 * Description:  This program will generate Binary Nodes.
 * Date Last modified: 11/30/2021
 *
 ---------------------------------------------------------------------------- */


#ifndef BNODE_H
#define BNODE_H
#include <iostream>
#include <string>

using namespace std;

template <typename ItemType>
class BNode
{
private:
       ItemType m_entry;
       BNode<ItemType> *m_left;
       BNode<ItemType> *m_right;

public:
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post build the node
       * @return none
       **/
       BNode(ItemType entry);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete node
       * @return none
       **/
       ~BNode();

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre have a value
       * @post none
       * @return return the value
       **/
       ItemType getEntry() const;

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set entry to node
       * @return none
       **/
       void setEntry(ItemType entry);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set the left value
       * @return none
       **/
       void setLeft(BNode<ItemType> *left);
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post set the right value
       * @return none
       **/
       void setRight(BNode<ItemType> *right);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return return left value
       **/
       BNode<ItemType> *getLeft() const;
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return return right value
       **/
       BNode<ItemType> *getRight() const;
};
#include "BNode.cpp"

#endif
