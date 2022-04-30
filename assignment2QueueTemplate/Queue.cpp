#include <iostream>
using namespace std;
#include "Queue.h"   

template <class T>
Queue<T>::Queue(int s) {

	size = (s > 0 ? s : 10);
	queuePtr = new T[size];
	head = -1;
	tail = -1;
}

template <class T>
bool Queue<T>::enqueue( const T& addValue) {

	if (!isFull())
	{
		if (head == -1)
			head = 0;//so head points to 1st element of queue
		queuePtr[++tail] = addValue;// add elements to queue while incrementing tail
		return true;

	}
	return false;
}

template <class T>
bool Queue<T>::dequeue(T &popValue) {

	if (!isEmpty())
	{
		popValue = queuePtr[head++];// remove elements from queue and incrementing head
		if (head > tail) // empty queue
		{ //reset queue
			head = -1;
			tail = -1;
		}
		
		return true;

	}
	return false;
}



int main() {
	Queue<int> queue1(8);
	int x = 3;

	Queue<double> queue2(5);
	double y = 1.1;

	cout << "\nInteger Queue 1 : \n" << endl;

	cout << "Adding elements : " << endl;
    while (queue1.enqueue(x))
		cout << x++ << "  ";


	cout << "\n\nHead of queue 1 : " << queue1.peek() << endl;
	cout << endl;


	cout << "Popping elements : " << endl;
	while (queue1.dequeue(x))
		cout << x-- << "  ";

	cout << "\n---------------------------------------------"<<endl;
	

	cout << "\nInteger Queue 2 : \n" << endl; 

	cout << "Adding elements : " << endl;
	while (queue1.enqueue(x))
		cout << x++ << "  ";

	cout << "\n\nHead of queue 2 : " << queue1.peek() << endl;
	cout << endl;
	
	cout << "Popping elements : " << endl;

	while (queue1.dequeue(x))
		cout << x-- << "  ";

	cout << "\n---------------------------------------------" << endl;

	
	cout << "\nDouble Queue 3 : \n" << endl;

	cout << "Adding elements : " << endl;

	while (queue2.enqueue(y))
		cout << y++ << "  ";

	cout << "\n\nHead of queue 3 : " << queue2.peek() << endl;
	cout << endl;

	cout << "Popping elements : " << endl;

	while (queue2.dequeue(y))
		cout << y-- << "  ";

	cout << endl;
	cout << endl;
	

}