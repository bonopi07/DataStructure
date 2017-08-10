#include "allen_stack.h"
#include <iostream>

int main()
{
	jsm::Stack<int> a(3);

	std::cout << "push 1" << std::endl;
	a.push(1);
	std::cout << "push 3" << std::endl;
	a.push(3);
	std::cout << "push 2" << std::endl;
	a.push(2);

	a.printAllData();

	std::cout << "pop" << a.pop() << std::endl;
	std::cout << "pop" << a.pop() << std::endl;
	std::cout << a.peak() << std::endl;

	std::cout << "push 10" << std::endl;
	a.push(10);

	a.printAllData();


	return 0;
}
