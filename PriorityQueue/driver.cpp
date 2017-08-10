#include <iostream>
#include "allen_priorityqueue.h"

int main()
{
	jsm::PriorityQueue<int> pq;

	pq.enqueue(1);
	pq.enqueue(3);
	pq.enqueue(6);
	pq.enqueue(7);
	pq.enqueue(9);
	pq.enqueue(13);
	pq.enqueue(15);
	pq.enqueue(20);
	pq.enqueue(2);

	pq.dequeue();

	return 0;
}