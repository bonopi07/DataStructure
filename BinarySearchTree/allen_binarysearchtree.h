/*

Author: Seongmin Jeong (Allen)
Goal: design binary search tree data structure using linked list
function: insert, delete, search, traversal(pre, in, post)

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_BINARYSEARCHTREE_H__
#define __ALLEN_BINARYSEARCHTREE_H__

#include "../BinaryTreeNode/allen_btnode.h"
#include <iostream>

namespace jsm {
	template <typename T>
	class BinarySearchTree {
	private:
		BTNode<T> *root;
		unsigned int size;
	public:
		BinarySearchTree() : root(NULL), size(0) { }

		void insertNode(T _data) {
			BTNode<T> *newNode = new BTNode<T>;
			
			newNode->setData(_data);
			size += 1;

			if (!root) {
				root = newNode;
				return;
			}

			BTNode<T> *curNode = root;
			while (true) {
				// data have to go left-side
				if (newNode->getData() < curNode->getData()) {
					if (curNode->getLeftNode())
						curNode = curNode->getLeftNode();
					else {
						curNode->setLeftNode(newNode);
						break;
					}
				}
				// data have to go right-side
				else {
					if (curNode->getRightNode())
						curNode = curNode->getRightNode();
					else {
						curNode->setRightNode(newNode);
						break;
					}
				}
			}
		}
	
		bool search(T _data) {
			BTNode<T> *curNode = root;

			if (!curNode)
				return false;

			while (true) {
				// data have to go left-side
				if (_data < curNode->getData()) {
					if (curNode->getLeftNode())
						curNode = curNode->getLeftNode();
					else
						break;
				}
				// data have to go right-side
				else if (_data > curNode->getData()) {
					if (curNode->getRightNode())
						curNode = curNode->getRightNode();
					else
						break;
				}
				// if data is finded
				else
					return true;
			}

			return false;
		}

		void deleteNode(T _data) {
			BTNode<T> *preNode = root;
			BTNode<T> *curNode = root;

			if (!curNode)
				return;

			while (true) {
				// data have to go left-side
				if (_data < curNode->getData()) {
					if (curNode->getLeftNode()) {
						preNode = curNode;
						curNode = curNode->getLeftNode();
					}
					else
						break;
				}
				// data have to go right-side
				else if (_data > curNode->getData()) {
					if (curNode->getRightNode()) {
						preNode = curNode;
						curNode = curNode->getRightNode();
					}
					else
						break;
				}
				// if data is finded
				else {
					size -= 1;

					// 1) child node = 0
					if (curNode->getLeftNode() == NULL && curNode->getRightNode()) {
						// 부모의 왼쪽 노드가 존재하고
						if (preNode->getLeftNode()) {
							// 부모의 왼쪽 노드가 curNode와 같다면
							if (curNode->getData() == preNode->getLeftNode()->getData()) {
								preNode->setLeftNode(NULL);
								delete curNode;
								return;
							}
						}
						// 그렇지 않다면
						preNode->setRightNode(NULL);
						delete curNode;
					}
					// 2) child node = 2
					else if (curNode->getLeftNode() && curNode->getRightNode()) {

					}
					// 3) child node = 1
					else {

					}
				}
			}

		}
	
		BTNode<T>* getRoot() {
			return this->root;
		}

		// pre order: VLR
		void preTraversal(BTNode<T>* _node) {
			if (_node == NULL)
				return;

			std::cout << _node->getData() << " ";
			preTraversal(_node->getLeftNode());
			preTraversal(_node->getRightNode());
		}

		// in order: LVR
		void inTraversal(BTNode<T>* _node) {
			if (_node == NULL)
				return;

			inTraversal(_node->getLeftNode());
			std::cout << _node->getData() << " ";
			inTraversal(_node->getRightNode());
		}

		// post order: LRV
		void postTraversal(BTNode<T>* _node, bool delFlag = false) {
			if (_node == NULL)
				return;

			postTraversal(_node->getLeftNode(), delFlag);
			postTraversal(_node->getRightNode(), delFlag);
			if (delFlag)
				delete _node;
			else
				std::cout << _node->getData() << " ";
		}

		~BinarySearchTree() {
			postTraversal(getRoot(), true);
		}
	};
}

#endif