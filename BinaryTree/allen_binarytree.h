/*
Author: Seongmin Jeong (Allen)
Goal: design binary search tree data structure using linked list
function: insert, delete, search, traversal(pre, in, post)

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_BINARYTREE_H__
#define __ALLEN_BINARYTREE_H__

#include <iostream>

namespace jsm {
	template <typename T>
	class BTNode {
	private:
		T data;
		BTNode<T> *leftNode, *rightNode;
	public:
		BTNode() : data(0), leftNode(NULL), rightNode(NULL) { }
		
		T getData() {
			return data;
		}

		void setData(T _data) {
			data = _data;
		}

		BTNode<T>* getLeftNode() {
			return leftNode;
		}

		void setLeftNode(BTNode<T>* _node) {
			leftNode = _node;
		}

		BTNode<T>* getRightNode() {
			return rightNode;
		}

		void setRightNode(BTNode<T>* _node) {
			rightNode = _node;
		}
		
		~BTNode() { }
	};

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
	
		void deleteNode(T _data) {
			BTNode<T> *curNode = root;

			if (!curNode)
				return;

			while (true) {
				if (_data < curNode->getData()) {
					if (curNode->getLeftNode())
						curNode = curNode->getLeftNode();
					else
						break;
				}
				else if (_data > curNode->getData()) {
					if (curNode->getRightNode())
						curNode = curNode->getRightNode();
					else
						break;
				}
				else {

				}
			}

		}
	
	};
}

#endif