#include "queue.h"

template<class T>
Queue<T>::Queue(int size)
{
    this->maxSize = size; 
    values = new T[size];

}

template<class T>
bool Queue<T>::IsEmpty()
    {
       if(counter == 0)
            return true;
        else
            return false; 
    }

template<class T>
bool Queue<T>::IsFull(void)
{
    if(counter < maxSize)
        return true; 
    else 
        return false; 
}

template<class T>
bool Queue<T>::Enqueue(T x){
    if (IsFull()) {
		cout << "Error: the queue is full." << endl;
		return false;
	}
	else {		
		rear= (rear + 1) % maxSize; 
		values[rear]= x;		
		counter++;
		return true;
	}		
}
template<class T>
bool Queue<T>::Dequeue(){
      if (IsEmpty()) {
		cout << "Error: the queue is empty." << endl;
		return false;
	}
	else {		
		x		= values[front];		
		front	= (front + 1) % maxSize;
		counter--;
		return true;		
	}
}

template<class T>

T Queue<T>::top()
{

    return values[front]; 
}

template<class T>
Queue<T>::~Queue()
{
    delete []values;

}