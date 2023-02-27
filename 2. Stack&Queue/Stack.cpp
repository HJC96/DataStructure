#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Stack_template
{
    private:
        T* arr;
        int capacity;
        int top;
    public:
        Stack_template();
        Stack_template(int size);
        ~Stack_template();
        bool isEmpty();
        bool isFull();
        T peek();
        void push(T num);
        T pop();
};

template<typename T>
Stack_template<T>::Stack_template()
:capacity(3)
{
    arr = new T[capacity];
    top = -1;
}

template<typename T>
Stack_template<T>::Stack_template(int size)
:capacity(size)
{
    arr = new T[capacity];
    top = -1;
}

template<typename T>
Stack_template<T>::~Stack_template()
{
    delete[] arr ;
}

template<typename T>
void Stack_template<T>::push(T num)
{
	if(isFull())
	{
		cout << "stack is Full!!" << endl;
		return -1;
	}
    arr[++top] = num;
	cout << "push: " << arr[top] << endl;
}

template<typename T>
T Stack_template<T>::pop()
{
	if(isEmpty())
	{
		cout << "stack is Empty!!" << endl;
		return -1;
	}
    cout << "pop : " << arr[top] << endl;
    return arr[top--];
}


template<typename T>
bool Stack_template<T>::isEmpty()
{
    return (top == -1);
}

template<typename T>
bool Stack_template<T>::isFull()
{
    return (top == capacity -1);
}

template<typename T>
T Stack_template<T>::peek()
{
    if(isEmpty())
    {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return arr[top];
}
