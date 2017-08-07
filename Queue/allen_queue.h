/*
Author: Seongmin Jeong (Allen)
Goal: design queue data structure using array
function: empty, full, enqueue, dequeue

ver 1.0: use namespace, template, class -> simple linear queue

*/

#ifndef __ALLEN_QUEUE_H__
#define __ALLEN_QUEUE_H__

#include <iostream>

#define MAXSIZE 1000000

namespace jsm {
	template <typename T>
	class queue {
	private:
		int front, rear;
		unsigned int dataLen;
		T *data;

	public:
		queue() : front(-1), rear(-1), dataLen(MAXSIZE) {
			data = new T[MAXSIZE];
		}

		queue(unsigned int size) : front(-1), rear(-1), dataLen(size) {
			data = new T[size];
		}

		bool IsEmpty() {
			if (front == rear)
				return true;
			else
				return false;
		}

		bool IsFull() {
			if (rear == front - (dataLen - 1))
				return true;
			else
				return false;
		}

		void Enqueue(T _data) {
			if (!IsFull())
				data[++rear] = _data;
		}

		T Dequeue() {
			if (!IsEmpty())
				return data[++front];
		}

		void PrintAllData() {
			std::cout << "Queue: ";
			for (int i = front+1; i <= rear; ++i)
				std::cout << data[i] << " ";
			std::cout << std::endl;
		}

		~queue() {
			delete data;
		}
	};
}


#endif