/*

Author: Seongmin Jeong (Allen)
Goal: design binary tree node to use kinds of data structure

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_BTNODE_H__
#define __ALLEN_BTNODE_H__

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
}

#endif