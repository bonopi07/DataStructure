/*

Author: Seongmin Jeong (Allen)
Goal: design priority queue data structure using min heap(complete binary tree)
Function: isEmpty, getSize, enqueue, dequeue, deleteAllData(=Heap Sort)

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_PRIORITY_QUEUE_H__
#define __ALLEN_PRIORITY_QUEUE_H__

#include "../BinaryTreeNode/allen_btnode.h"
#include "../Stack/allen_stack.h"
#include <iostream>
#include <cmath>

#define IS_LESS_THAN < // Because we will use min heap

namespace jsm {
	template <typename T>
	class PriorityQueue {
	private:
		BTNode<T>* root;
		unsigned int size;

		int setNode(BTNode<T> *ppNode, BTNode<T> *pNode, BTNode<T> *nNode, Stack<int> &s, bool isLeafNode) {
			if (s.getSize() == 1) {
				isLeafNode = true;
			}

			if (!s.isEmpty()) {
				if (s.pop() == 0) { // LEFT
					if (isLeafNode) {
						pNode->setLeftNode(nNode);
					}
					else {
						ppNode = pNode;
						pNode = pNode->getLeftNode();
						if (setNode(ppNode, pNode, nNode, s, isLeafNode) == 0)
							return 0;
					}
				}
				else { // RIGHT
					if (isLeafNode) {
						pNode->setRightNode(nNode);
					}
					else {
						ppNode = pNode;
						pNode = pNode->getRightNode();
						if (setNode(ppNode, pNode, nNode, s, isLeafNode) == 0)
							return 0;
					}
				}
			}

			if (cNode->getData() IS_LESS_THAN pNode->getData()) {
				T tmp = cNode->getData();
				cNode->setData(pNode->getData());
				pNode->setData(tmp);

				return 1;
			}
			else
				return 0; // don't need to change
		}
	public:
		PriorityQueue() : root(NULL), size(0) { }

		bool isEmpty() {
			if (size == 0)
				return true;
			else
				return false;
		}

		unsigned int getSize() {
			return size;
		}

		void enqueue(T _data) {
			BTNode<T> *newNode = new BTNode<T>;
			
			newNode->setData(_data);
			size += 1;
			if (!root) {
				root = newNode;
				return;
			}

			// O(lgN): searching the place where new node goes //
			Stack<int> directionStorage((int)std::log2(size));
			unsigned int _size = size;
			while (_size != 1) {
				directionStorage.push(_size % 2);
				_size /= 2;
			}

			// O(lgN): set new node //
			setNode(this->root, this->root, newNode, directionStorage, false);			
		}
	};
}

#endif