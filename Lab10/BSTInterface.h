/* -----------------------------------------------------------------------------
 *
 * File Name:  BSTInterface.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program is the interface of BST functions.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef BSTINTERFACE_H
#define BSTINTERFACE_H

template <typename ItemType>
class BSTInterface
{
    public:
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post deconstructor
       * @return none
       **/
    virtual ~BSTInterface(){}
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post add node
       * @return none
       **/
    virtual void add(ItemType entry) = 0; //throws std::runtime_error if duplicate added
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post search node 
       * @return none
       **/
    virtual ItemType search(int key) const = 0; //throws std::runtime_error if not in tree
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete all nodes
       * @return none
       **/
    virtual void clear() = 0; //Empties the tree
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post remove node
       * @return none
       **/
    virtual void remove(ItemType key) = 0; //throws std::runtime_error if not in tree

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with pre order
       * @return none
       **/
    virtual void visitPreOrder(void visit(ItemType)) const = 0; //Visits each node in pre order
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with in order
       * @return none
       **/
    virtual void visitInOrder(void visit(ItemType)) const = 0; //Visits each node in in order
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with post order
       * @return none
       **/
    virtual void visitPostOrder(void visit(ItemType)) const = 0; //Visits each node in post order
};
#endif
