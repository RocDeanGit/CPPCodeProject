#pragma once
#ifndef STACKOFINTEGERS_H
#define STACKOFINTEGERS_H
class StackOfIntegers
{
public:
	StackOfIntegers();
	bool isEmpty();
	int peek();
	void push(int value);
	int pop();
	int getSize();
private:
	int size;
	int elements[100];
};
#endif
