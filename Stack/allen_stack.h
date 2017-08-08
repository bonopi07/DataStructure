/*

Author: Seongmin Jeong (Allen)
Goal: design stack data structure using array
function: insert, pop, peak, empty, full, print all data

ver 1.0: used class, only store integer type
ver 1.1: used template
ver 1.2: used namespace
ver 1.3: fixed default size (1MB)

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
		unsigned int dataLen;
		T *data;

	public:
		Stack() : top(-1), dataLen(MAXSIZE) {
			data = new T[MAXSIZE];
		}

		Stack(unsigned int size) : top(-1), dataLen(size) {
			data = new T[size];
		}

		bool isEmpty() {
			if (top == -1)
				return true;
			else
				return false;
		}

		bool isFull() {
			if (top == dataLen - 1)
				return true;
			else
				return false;
		}

		void insert(T _data) {
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
