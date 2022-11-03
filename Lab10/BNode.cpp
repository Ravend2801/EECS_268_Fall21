/* -----------------------------------------------------------------------------
 *
 * File Name:  BNode.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program will generate Binary Nodes.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
template <typename ItemType>
BNode< ItemType>::BNode()
{
	// this->m_entry = nullptr;
	this->m_left = nullptr;
	this->m_right = nullptr;
}

template <typename ItemType>
BNode< ItemType>::BNode(ItemType entry)
{
	this->m_entry = entry;
	this->m_left = nullptr;
	this->m_right = nullptr;
}

template <typename ItemType>
BNode< ItemType>::~BNode() {}

template <typename ItemType>
ItemType BNode< ItemType>:: getEntry() const
{
	return this->m_entry;
}

template <typename ItemType>
void BNode< ItemType>::setEntry(ItemType entry)
{
	this->m_entry = entry;
}

template <typename ItemType>
BNode<ItemType>* BNode< ItemType>::getLeft() const
{
	return this->m_left;
}

template <typename ItemType>
void BNode< ItemType>::setLeft(BNode<ItemType>* left)
{
	this->m_left = left;
}

template <typename ItemType>
BNode<ItemType>* BNode< ItemType>:: getRight() const
{
	return this->m_right;
}

template <typename ItemType>
void BNode< ItemType>::setRight(BNode<ItemType>* right)
{
	this->m_right = right;
}

