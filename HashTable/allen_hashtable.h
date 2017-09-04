/*

Author: Seongmin Jeong (Allen)
Goal: design simple hash table. Used data type: array, added BST
Hash Function: Sum of each digits

ver 1.0: simple hash table (if collision, ignore)
ver 1.1: advanced hash table (if collision, add using linked-list)

*/

#ifndef __ALLEN_HASHTABLE_H__
#define __ALLEN_HASHTABLE_H__

#include <iostream>
#include <cstring>
#include "../Node/allen_node.h"

#define MAX_TABLE_SIZE 1000 // the number of key

namespace jsm {
	template <typename T>
	class HashTable {
	private:
		Node<T> table[MAX_TABLE_SIZE];
		bool used[MAX_TABLE_SIZE];
	
		int hash(T _data) {
			return _data%MAX_TABLE_SIZE; // index
		}
	public:
		HashTable() {
			memset(used, false, sizeof(used));
		}

		void insertData(T _data) {
			int _index = hash(_data);

			/* if collision */
			if (used[_index]) {
				std::cout << "Collision!" << std::endl;

				return;
			}

			used[_index] = true;
			table[_index].data = _data;
		}

		void printData(T _data) {
			if (used[hash(_data)]) {
				for ()
				//std::cout << _data << " exists." << std::endl;
			}
			else {
				std::cout << _data << " not exists." << std::endl;
			}
		}

		~HashTable() { }
	};
}


#endif
