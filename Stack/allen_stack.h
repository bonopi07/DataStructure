/*

Author: Seongmin Jeong (Allen)
Goal: design stack data structure using array
function: insert, pop, peak, empty, full, print all data

ver 1.0: use class, only store integer type
ver 1.1: use template
ver 1.2: use namespace

*/

#ifndef __ALLEN_STACK_H__
#define __ALLEN_STACK_H__

#include <iostream>

namespace jsm {
	template <typename T>
	class stack {
	private:
		int top;
		unsigned int dataLen;
		T *data;

	public:
		stack() : top(-1), data(NULL) {}

		stack(unsigned int size) : top(-1), dataLen(size) {
			data = new T[size];
		};

		bool IsEmpty() {
			if (top == -1)
				return true;
			else
				return false;
		}

		bool IsFull() {
			if (top == dataLen - 1)
				return true;
			else
				return false;
		}

		void Insert(T _data) {
			if (!IsFull())
				data[++top] = _data;
		}

		T Pop() {
			if (!IsEmpty())
				return data[top--];
		}

		T Peak() {
			return data[top];
		}

		void PrintAllData() {
			std::cout << "Stack: ";
			for (int i = 0; i <= top; ++i)
				std::cout << data[i] << " ";
			std::cout << std::endl;
		}

		~stack() {
			delete data;
		}
	};
}

#endif
