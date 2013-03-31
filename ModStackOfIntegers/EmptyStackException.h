#include <stdexcept>
#ifndef EMPTYSTACKEXCEPTION_H
#define EMPTYSTACKEXCEPTION_H
using namespace std;

class EmptyStackException:public out_of_range
{
public:
	EmptyStackException()
		:out_of_range("Õ»Îª¿Õ")
	{

	}
};

#endif