#include "allen_queue.h"
#include <iostream>
#include <queue>
int main()
{
	jsm::queue<int> q(5);
	
	q.Enqueue(1);
	q.Enqueue(3);
	q.Enqueue(5);

	std::cout << q.Dequeue() << std::endl;
	std::cout << q.Dequeue() << std::endl;
	
	q.Enqueue(13);

	q.PrintAllData();

	return 0;
}