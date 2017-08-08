#include "allen_binarytree.h"
#include <iostream>

int main()
{
	jsm::BinarySearchTree<int> bst;

	bst.insertNode(7);
	bst.insertNode(5);
	bst.insertNode(8);
	bst.insertNode(10);

	return 0;
}