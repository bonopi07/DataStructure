/*
Author: Seongmin Jeong (Allen)
Goal: design queue data structure using array
function: empty, full, enqueue, dequeue

ver 1.0: used namespace, template, class -> simple linear queue
ver 1.1: replaced storage from array to linked list
ver 1.2: modified storing method, added size method

*/

#ifndef __ALLEN_QUEUE_H__
#define __ALLEN_QUEUE_H__

#include <iostream>
#include "../Node/allen_node.h"

namespace jsm {
	template <typename T>
	class Queue {
	private:
		Node<T> *front, *rear;
		unsigned int size;
	public:
		Queue() : front(NULL), rear(NULL), size(0) { }

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
			Node<T> *newNode = new Node<T>;

			newNode->setData(_data);

			if (size == 0) {
				front = rear = newNode;
				size += 1;
				return;
			}

			rear->setLink(newNode);
			rear = newNode;
			size += 1;
		}

		T dequeue() {
			if (!isEmpty()) {
				T curData = front->getData();
				Node<T> *curNode = front;

				front = front->getLink();

				delete curNode;
				size -= 1;

				return curData;
			}
		}

		void printAllData() {
			std::cout << "Queue: ";
			Node<T> *iterNode;

			for (iterNode = front; iterNode; iterNode = iterNode->getLink())
				std::cout << iterNode->getData() << " ";
			
			std::cout << std::endl;
		}

		~Queue() {
			while (!isEmpty())
				dequeue();
		}
	};
}

#endif
