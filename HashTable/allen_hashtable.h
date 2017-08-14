/*

Author: Seongmin Jeong (Allen)
Goal: design simple hash table. Used data type: array, added BST
Hash Function: Sum of each digits

ver 1.0: simple hash table (no consider about collision)

*/

#ifndef __ALLEN_HASHTABLE_H__
#define __ALLEN_HASHTABLE_H__

#define MAX_TABLE_SIZE 10000 // the number of key
// #define MAX_SPACE_SIZE 8 // the number of same space of same key

namespace jsm {
	template <typename T>
	class HashTable {
	private:
		T table[MAX_TABLE_SIZE];
	public:
		HashTable() { }

		void hashFunction(T _data) {
			
		}

		~HashTable() { }
	};
}


#endif