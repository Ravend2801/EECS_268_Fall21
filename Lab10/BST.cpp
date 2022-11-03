/* -----------------------------------------------------------------------------
 *
 * File Name:  BST.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program has BST functions.
 * Date Last modified: 12/05/2021
 *
 ---------------------------------------------------------------------------- */
template <typename ItemType>
BST<ItemType>::BST()
{
	this->m_root = nullptr;
}

template <typename ItemType>
BST<ItemType>::~BST()
{
	clear();
}

template <typename ItemType>
void BST<ItemType>::add(ItemType entry)
{
	if (m_root == nullptr)
	{
		m_root = new BNode<ItemType>(entry);
	}
	else
	{
		BNode<ItemType> *temp = new BNode<ItemType>(entry);
		recadd(temp, m_root);
	}
}

template <typename ItemType>
ItemType BST<ItemType>::search(int key) const
{
	if (m_root == nullptr)
	{
		throw(std::runtime_error("Tree is empty"));
	}
	else
	{
		BNode<ItemType> *temp = recsearch(key, m_root);
		if (temp == nullptr)
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
void BST<ItemType>::remove(ItemType key)
{
	m_root=recremove(key, m_root);
}

template <typename ItemType>
void BST<ItemType>::clear()
{
	recClear(m_root);
}

template <typename ItemType>
void BST<ItemType>::visitPreOrder(void visit(ItemType)) const
{
	PreOrder(visit, m_root);
}

template <typename ItemType>
void BST<ItemType>::visitInOrder(void visit(ItemType)) const
{
	InOrder(visit, m_root);
}

template <typename ItemType>
void BST<ItemType>::visitPostOrder(void visit(ItemType)) const
{
	PostOrder(visit, m_root);
}

//Private methods

template <typename ItemType>
BNode<ItemType> *BST<ItemType>::recsearch(int key, BNode<ItemType> *subtree) const
{
	if (subtree == nullptr)
	{
		return nullptr;
	}
	if (subtree->getEntry() == key)
	{
		return subtree;
	}
	if (subtree->getEntry() < key)
	{
		return recsearch(key, subtree->getRight());
	}
	else
	{
		return recsearch(key, subtree->getLeft());
	}
}

template <typename ItemType>
void BST<ItemType>::recadd(BNode<ItemType> *temp, BNode<ItemType> *subtree)
{
	if (subtree->getEntry() == temp->getEntry())
	{
		throw(std::runtime_error("Entry already exists."));
	}
	else if (subtree->getEntry() > temp->getEntry())
	{
		if (subtree->getLeft() == nullptr)
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
		if (subtree->getRight() == nullptr)
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
BNode<ItemType> *BST<ItemType>::recremove(ItemType key, BNode<ItemType> *subtree)
{
	if (subtree == nullptr)
	{
		throw(std::runtime_error("Tree is empty."));
	}
	else
	{
		if (subtree->getEntry() > key)
		{
			subtree->setLeft(recremove(key, subtree->getLeft()));
		}

		else if (subtree->getEntry() < key)
		{
			subtree->setRight(recremove(key, subtree->getRight()));
		}

		// if key is same as root's key
		else
		{
			// node with only one child or no child
			if (subtree->getLeft() == nullptr)
			{
				BNode<ItemType>*tempptr = subtree->getRight();
				delete subtree;
				return tempptr;
			}
			else if (subtree->getRight() == nullptr)
			{
				BNode<ItemType>*tempptr = subtree->getLeft();
				delete subtree;
				return tempptr;
			}
			// node with two children:
			BNode<ItemType> *temp = minValue(subtree->getRight());
			cout<<subtree->getEntry().getID();
			subtree->setEntry(temp->getEntry());
			subtree->setRight(recremove(temp->getEntry(), subtree->getRight()));
			
		}
		return subtree;
	}	
}

template <typename ItemType>
BNode<ItemType> *BST<ItemType>::minValue(BNode<ItemType> *subtree)
{
	// BNode<ItemType>* min = subtree->getEntry();
	if (m_root == nullptr)
	{
		throw(std::runtime_error("Tree is empty"));
	}

	else
	{
		if (subtree->getLeft() != nullptr)
		{
			return minValue(subtree->getLeft());
		}
		else 
		{
			return subtree;
		}
	}
}

template <typename ItemType>
void BST<ItemType>::PreOrder(void visit(ItemType), BNode<ItemType> *subtree) const
{
	if (subtree == nullptr)
	{
		return;
	}
	visit(subtree->getEntry());
	PreOrder(visit, subtree->getLeft());
	PreOrder(visit, subtree->getRight());
}

template <typename ItemType>
void BST<ItemType>::InOrder(void visit(ItemType), BNode<ItemType> *subtree) const
{
	if (subtree == nullptr)
	{
		return;
	}
	InOrder(visit, subtree->getLeft());
	visit(subtree->getEntry());
	InOrder(visit, subtree->getRight());
}

template <typename ItemType>
void BST<ItemType>::PostOrder(void visit(ItemType), BNode<ItemType> *subtree) const
{
	if (subtree == nullptr)
	{
		return;
	}
	PostOrder(visit, subtree->getLeft());
	PostOrder(visit, subtree->getRight());
	visit(subtree->getEntry());
}
template <typename ItemType>
void BST<ItemType>::recClear(BNode<ItemType> *subtree) const
{
	if (subtree == nullptr)
	{
		return;
	}
	recClear(subtree->getLeft());
	recClear(subtree->getRight());
	delete subtree;
}

template <typename ItemType>
const BST<ItemType> &BST<ItemType>::operator =(const BST<ItemType>* &rhs)
{
	if (this != &rhs)
	{
		clear();
		m_root = clone(rhs->m_root);
	}
	return *this;
}


template <typename ItemType>
BNode<ItemType> *BST<ItemType>::clone(BNode<ItemType> *t) const
{
	if (t == nullptr)
		return nullptr;
	BNode<ItemType> *copy = new BNode<ItemType>();
	copy->setEntry(t->getEntry());
	copy->setLeft(clone(t->getLeft()));
	copy->setRight(clone(t->getRight()));
	return copy;
}

template <typename ItemType>
BST<ItemType>::BST(const BST<ItemType>* & rhs) : m_root(nullptr)
{
	m_root = clone(rhs->m_root);
}
