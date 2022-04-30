#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template < class T>
class Queue {
private:
	int size;
	T* queuePtr;
	int head;
	int tail;

public:
	Queue(int);
	~Queue(){ delete[] queuePtr;}
	bool enqueue(const T &);
	bool dequeue(T &);
	T peek() { return queuePtr[head]; }
	
	bool isEmpty()const { return head == -1 ;}// reset queue
	bool isFull()const { return tail == (size - 1) && head == 0; }
	

};













#endif 