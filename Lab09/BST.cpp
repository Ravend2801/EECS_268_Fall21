/* -----------------------------------------------------------------------------
 *
 * File Name:  BST.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 09
 * Description:  This program has BST functions.
 * Date Last modified: 11/30/2021
 *
 ---------------------------------------------------------------------------- */
template <typename ItemType>
 BST< ItemType>::~BST()
{
	clear();
}

template <typename ItemType>
void BST< ItemType>::add(ItemType entry)
{
    if(m_root == nullptr)
	{
		m_root = new BNode<ItemType>(entry);
	}
	else
	{
		BNode<ItemType>* temp = new BNode<ItemType>(entry);
		recadd(temp, m_root);
	}

}

template <typename ItemType>
ItemType BST<ItemType>::search(int key) const
{
	if (m_root== nullptr)
	{
		throw(std::runtime_error("Tree is empty"));
	}
	else
	{
		BNode<ItemType>* temp = recsearch(key,m_root);
		if(temp ==nullptr)
		{
			throw(std::runtime_error("Pokemon does not exist.\n"));
		}
		else
		{
			return temp->getEntry();
		}
	}
   
}

template <typename ItemType>
void BST< ItemType>::clear()
{
    recClear(m_root);
}


template <typename ItemType>
void BST< ItemType>::visitPreOrder(void visit(ItemType)) const
{
    PreOrder(visit,m_root);
}

template <typename ItemType>
void BST< ItemType>::visitInOrder(void visit(ItemType)) const
{
    InOrder(visit,m_root);
}

template <typename ItemType>
void BST< ItemType>::visitPostOrder(void visit(ItemType)) const
{
    PostOrder(visit,m_root);
}

//Private methods

template <typename ItemType>
BNode<ItemType>* BST< ItemType>::recsearch(int key, BNode<ItemType>* subtree) const
{
	if(subtree== nullptr)
	{
		return nullptr;
	}
 	if (subtree->getEntry() ==key)
	{
		return subtree;
	}
	if (subtree->getEntry() < key)
	{
		return recsearch( key, subtree->getRight());
	}
	else
	{
		return recsearch( key, subtree->getLeft());
	}	
}


template <typename ItemType>
void BST< ItemType>::recadd(BNode<ItemType>* temp, BNode<ItemType>* subtree)
{
	if(subtree->getEntry() == temp->getEntry())
	{
		throw(std::runtime_error("Entry already exists."));
	}
	else if(subtree->getEntry() >temp->getEntry())
	{
		if(subtree->getLeft() == nullptr)
		{
			subtree->setLeft(temp);
		}
		else
		{
			recadd(temp, subtree->getLeft());
		}
	}
	else
	{
		if(subtree->getRight() == nullptr)
		{
			subtree->setRight(temp);
		}
		else
		{
			recadd(temp, subtree->getRight());
		}		
    }
}

template <typename ItemType>
void BST< ItemType>::PreOrder(void visit(ItemType),BNode<ItemType>* subtree) const
{
    if(subtree == nullptr){	return;}
	visit(subtree->getEntry());
	PreOrder(visit,subtree->getLeft());
	PreOrder(visit, subtree->getRight());
}

template <typename ItemType>
void BST< ItemType>::InOrder(void visit(ItemType),BNode<ItemType>* subtree) const
{
    if(subtree == nullptr){return;}
	InOrder(visit,subtree->getLeft());
	visit(subtree->getEntry());
	InOrder(visit, subtree->getRight());
}


template <typename ItemType>
void BST< ItemType>::PostOrder(void visit(ItemType),BNode<ItemType>* subtree) const
{
    if(subtree == nullptr){return;}
	PostOrder(visit,subtree->getLeft());
	PostOrder(visit, subtree->getRight());
	visit(subtree->getEntry());
}
template <typename ItemType>
void BST< ItemType>::recClear(BNode<ItemType>* subtree) const
{
    if(subtree == nullptr){return;}
	recClear(subtree->getLeft());
	recClear(subtree->getRight());
	delete subtree;
}
