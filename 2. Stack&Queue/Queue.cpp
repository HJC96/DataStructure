#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Queue_template
{
    private:
        T *arr;
        int capacity;
        int rear;
        int front;
    public:
        Queue_template();
        Queue_template(int size);
        ~Queue_template();
        void Enqueue(T num);
        T Dequeue();
        bool IsEmpty();
        bool IsFull();
        T peek();

};

template<typename T>
Queue_template<T>::Queue_template()
:capacity(5)
{
    arr = new T[capacity];
    front = -1;
    rear = -1;
}

template<typename T>
Queue_template<T>::Queue_template(int size)
:capacity(size)
{
    arr = new T[capacity];
    front = -1;
    rear = -1;
}

template<typename T>
Queue_template<T>::~Queue_template()
{
    delete[] arr;
}

template<typename T>
void Queue_template<T>::Enqueue(T num)
{
    if(IsFull())
    {
        cout << "Queue is Full" << endl;
    }
    else if(IsEmpty())
    {
        arr[++front] = num;
        rear++;
    }
    else
    {
    front = (front+1)%capacity; 
    arr[front] = num;
    }
}

template<typename T>
T Queue_template<T>::Dequeue()
{
    if(IsEmpty())
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    int state = rear;
    rear = (rear+1)%capacity;
    return arr[state] ;
}

template<typename T>
bool Queue_template<T>::IsEmpty()
{
    return (front == -1);
}

template<typename T>
bool Queue_template<T>::IsFull()
{
    return rear == (front+1)%capacity ;
}


template<typename T>
T Queue_template<T>::peek()
{
    if(IsEmpty())
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    return arr[rear] ;
}
