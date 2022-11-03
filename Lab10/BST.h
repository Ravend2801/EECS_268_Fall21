/* -----------------------------------------------------------------------------
 *
 * File Name:  BST.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program has BST functions.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef BST_H
#define BST_H

#include "BNode.h"
#include "BSTInterface.h"

template <typename ItemType>
class BST : public BSTInterface<ItemType>
{
    
    public:
    // BNode<ItemType>* m_root;
 
    BST();

    BST(const BST<ItemType>* &rhs);

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post deconstrutor: delete all nodes
       * @return none
       **/
    ~BST();

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post add node
       * @return none
       **/
    void add(ItemType entry) ; //throws std::runtime_error if duplicate added
     
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post search node 
       * @return none
       **/
    ItemType search(int key) const ; //throws std::runtime_error if not in tree
     
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete all nodes
       * @return none
       **/
    void clear() ; //Empties the tree
    
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post remove node
       * @return none
       **/
    void remove(ItemType key) ; //throws std::runtime_error if not in tree
    

    void visitPreOrder(void visit(ItemType)) const ; //Visits each node in pre order
    
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with in order
       * @return none
       **/
    void visitInOrder(void visit(ItemType)) const ; //Visits each node in in order
    
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with post order
       * @return none
       **/
    void visitPostOrder(void visit(ItemType)) const ; //Visits each node in post order

    const BST<ItemType>& operator=(const BST<ItemType>* &rhs);

    private:
    
    BNode<ItemType>* m_root;
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post add node (private method)
       * @return none
       **/
    void recadd(BNode<ItemType>* temp, BNode<ItemType>* subtree);
  
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post search node (private method)
       * @return none
       **/
    BNode<ItemType>* recsearch(int key, BNode<ItemType>* subtree) const;

        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete node (private method)
       * @return none
       **/
    BNode<ItemType>* recremove(ItemType key, BNode<ItemType>* subtree);
    
   /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes in pre order (private moethod)
       * @return none
       **/
    void PreOrder(void visit(ItemType),BNode<ItemType>* subtree) const ;
   
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes with in order (private method)
       * @return none
       **/
    void InOrder(void visit(ItemType),BNode<ItemType>* subtree) const;
   
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post print all nodes in post order (private moethod)
       * @return none
       **/
    void PostOrder(void visit(ItemType),BNode<ItemType>* subtree) const ;
   
        /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete node in the post order (private method)
       * @return none
       **/
    void recClear(BNode<ItemType>* subtree) const;

    BNode<ItemType>* minValue(BNode<ItemType> *subtree);

    BNode<ItemType>* clone(BNode<ItemType> *t) const;


};

#include "BST.cpp"

#endif
