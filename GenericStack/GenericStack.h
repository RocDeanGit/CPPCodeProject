#pragma once

#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template<typename T>
class Stack
{
public:
	Stack();
	bool empty();
	T peek();
	void push(T value);
	T pop();
	int getSize();
	void printStack();
	bool contains(T elements);
private:
	T elements[100];
	int size;
};
template<typename T>
Stack<T>::Stack()
{
	size=0;
}

template<typename T>
bool Stack<T>::empty()
{
	return (size==0);
}

template<typename T>
T Stack<T>::peek()
{
	return elements[size-1];
}

template<typename T>
void Stack<T>::push(T value)
{
	elements[size++]=value;
}

template<typename T>
T Stack<T>::pop()
{
	return elements[--size];
}

template<typename T>
int Stack<T>::getSize()
{
	return size; 
}

template<typename T>
void Stack<T>::printStack()
{
	for(int i=0;i<size;i++)
	{
		cout<<this->elements[i]<<" ";
	}
	cout<<endl;
}

template<typename T>
bool Stack<T>::contains(T elements)
{
	for(int i=0;i<size;i++)
	{
		if(this->elements[i]==elements)
			return true;
	}
	return false;
}

#endif
