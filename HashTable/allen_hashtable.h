/*

Author: Seongmin Jeong (Allen)
Goal: design simple hash table. Used data type: array, added BST
Hash Function: Sum of each digits

ver 1.0: simple hash table (no consider about collision)

*/

#ifndef __ALLEN_HASHTABLE_H__
#define __ALLEN_HASHTABLE_H__

#include <iostream>
#include <cstring>

#define MAX_TABLE_SIZE 10000 // the number of key
// #define MAX_SPACE_SIZE 8 // the number of same space of same key

namespace jsm {
	template <typename T>
	class HashTable {
	private:
		T table[MAX_TABLE_SIZE];
		bool used[MAX_TABLE_SIZE];
	public:
		HashTable() {
			memset(used, false, sizeof(used));
		}

		int hash(T _data) {
			return _data%MAX_TABLE_SIZE; // index
		}

		void insertData(T _data) {
			int _index = hash(_data);

			used[_index] = true;
			table[_index] = _data;
		}

		void printData(T _data) {
			if (used[hash(_data)])
				std::cout << _data << " exists,\n" << std::endl;
		}

		~HashTable() { }
	};
}


#endif
