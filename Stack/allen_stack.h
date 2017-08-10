/*

Author: Seongmin Jeong (Allen)
Goal: design stack data structure using array
function: push, pop, peak, isEmpty, isFull, printAllData, getSize

ver 1.0: used class, only store integer type
ver 1.1: used template
ver 1.2: used namespace
ver 1.3: fixed default _size (1MB)
ver 1.4: added method: getSize

*/

#ifndef __ALLEN_STACK_H__
#define __ALLEN_STACK_H__

#include <iostream>

#define MAXSIZE 1000000

namespace jsm {
	template <typename T>
	class Stack {
	private:
		int top;
		unsigned int size;
		T *data;

	public:
		Stack() : top(-1), size(MAXSIZE) {
			data = new T[MAXSIZE];
		}

		Stack(unsigned int _size) : top(-1), size(_size) {
			data = new T[_size];
		}

		bool isEmpty() {
			if (top == -1)
				return true;
			else
				return false;
		}

		bool isFull() {
			if (top == size - 1)
				return true;
			else
				return false;
		}

		unsigned int getSize() {
			return top+1;
		}

		void push(T _data) {
			if (!isFull())
				data[++top] = _data;
		}

		T pop() {
			if (!isEmpty())
				return data[top--];
		}

		T peak() {
			if (!isEmpty())
				return data[top];
		}

		void printAllData() {
			std::cout << "Stack: ";
			for (int i = 0; i <= top; ++i)
				std::cout << data[i] << " ";
			std::cout << std::endl;
		}

		~Stack() {
			delete []data;
		}
	};
}

#endif
