#include "allen_stack.h"
#include <iostream>

int main()
{
	jsm::Stack<int> a(3);

	std::cout << "insert 1" << std::endl;
	a.insert(1);
	std::cout << "insert 3" << std::endl;
	a.insert(3);
	std::cout << "insert 2" << std::endl;
	a.insert(2);

	a.printAllData();

	std::cout << "pop" << std::endl;
	a.pop();
	std::cout << a.pop() << std::endl;
	std::cout << a.peak() << std::endl;

	std::cout << "insert 10" << std::endl;
	a.insert(10);

	a.printAllData();


	return 0;
}
