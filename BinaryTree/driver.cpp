#include "allen_binarytree.h"
#include <iostream>

int main()
{
	jsm::BinarySearchTree<int> bst;

	std::cout << "insert: 10, 7, 1, 5, 9, 13, 15, 12, 14, 16" << std::endl;
	bst.insertNode(10);
	bst.insertNode(7);
	bst.insertNode(1);
	bst.insertNode(5);
	bst.insertNode(9);
	bst.insertNode(13);
	bst.insertNode(15);
	bst.insertNode(12);
	bst.insertNode(14);
	bst.insertNode(16);

	std::cout << std::endl;
	std::cout << "Pre Traversal: ";
	bst.preTraversal(bst.getRoot());
	std::cout << std::endl;
	std::cout << "Answer       : 10 7 1 5 9 13 12 15 14 16 " << std::endl;

	std::cout << std::endl;
	std::cout << "In Traversal: ";
	bst.inTraversal(bst.getRoot());
	std::cout << std::endl;
	std::cout << "Answer      : 1 5 7 9 10 12 13 14 15 16 " << std::endl;

	std::cout << std::endl;
	std::cout << "Post Traversal: ";
	bst.postTraversal(bst.getRoot());
	std::cout << std::endl;
	std::cout << "Answer        : 5 1 9 7 12 14 16 15 13 10 " << std::endl;

	std::cout << std::endl;
	std::cout << "search(14, 9, 3): " << bst.search(14) << " " << bst.search(9) << " " << bst.search(3) << std::endl;
	
	return 0;
}