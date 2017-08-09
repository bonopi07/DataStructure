/*

Author: Seongmin Jeong (Allen)
Goal: design priority queue data structure using min heap(complete binary tree)
Function: isEmpty, getSize, enqueue, dequeue, deleteAllData(=Heap Sort)

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_PRIORITY_QUEUE_H__
#define __ALLEN_PRIORITY_QUEUE_H__

#include "../BinaryTreeNode/allen_btnode.h"
#include <iostream>

namespace jsm {
	template <typename T>
	class PriorityQueue {
	private:
		BTNode<T>* data;
		unsigned int size;
	public:
		PriorityQueue() : data(NULL), size(0) { }

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

		}
	};
}

#endif