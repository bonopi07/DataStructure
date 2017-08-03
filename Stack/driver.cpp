#include "allen_stack.h"
#include <iostream>

int main()
{
	jsm::stack<int> a(3);

	a.Insert(1);
	a.Insert(3);
	a.Insert(2);

	a.PrintAllData();

	a.Pop();
	std::cout << a.Pop() << std::endl;
	std::cout << a.Peak() << std::endl;

	a.Insert(10);

	a.PrintAllData();


	return 0;
}