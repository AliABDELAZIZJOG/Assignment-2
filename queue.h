#include <iostream>
#include <stdio.h>
using namespace std; 
template<class T>
class Queue{
private:
	int front;		// indexs for front and rear 
	int rear;		
	int counter;	// number of elements in the queue
	int maxSize;	// maximum size of the queue array
	T* values;	
public:
	Queue(int size = 10);			// constructor
	~Queue();                      	// destructor
	bool IsEmpty(void);         //bools to check if queue is empty or full
	bool IsFull(void);
	bool Enqueue(T x);             //push/pop
	bool Dequeue();
    T top();
	void DisplayQueue(void);

};
