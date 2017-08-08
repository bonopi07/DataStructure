#include "allen_queue.h"
#include <iostream>

int main()
{
	jsm::Queue<int> q;
	
	q.enqueue(1);
	q.enqueue(3);
	q.enqueue(5);
	q.enqueue(2);

	std::cout << q.dequeue() << std::endl;
	std::cout << q.dequeue() << std::endl;
	
	q.enqueue(13);

	q.printAllData();

	return 0;
}
