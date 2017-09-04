#include "allen_hashtable.h"

int main()
{
	jsm::HashTable<int> h;

	std::cout << "insert 1" << std::endl;
	h.insertData(1);

	std::cout << "insert 2" << std::endl;
	h.insertData(2);

	std::cout << "insert 3" << std::endl;
	h.insertData(3);

	std::cout << "insert 5" << std::endl;
	h.insertData(5);

	h.printData(1);
	h.printData(2);
	h.printData(3);
	h.printData(5);

	std::cout << "insert 1001" << std::endl;
	h.insertData(1001);

	std::cout << "insert 1003" << std::endl;
	h.insertData(1003);

	h.printData(1001);
	h.printData(1003);

	return 0;
}