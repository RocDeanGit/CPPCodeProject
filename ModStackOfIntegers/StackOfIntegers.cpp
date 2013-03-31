#include "StackOfIntegers.h"
#include "EmptyStackException.h"

StackOfIntegers::StackOfIntegers()
{
	size=0;
}


bool StackOfIntegers::isEmpty()
{
	return (size==0);
}

int StackOfIntegers::peek()
{
	return elements[size-1];
}

void StackOfIntegers::push(int value)
{
	elements[size++]=value;
}

int StackOfIntegers::pop()
{
	if(size==0)
		throw EmptyStackException();
	return elements[--size];	
}

int StackOfIntegers::getSize()
{
	return size;
}