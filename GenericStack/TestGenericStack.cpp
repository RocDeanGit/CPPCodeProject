#include <iostream>
#include "GenericStack.h"
using namespace std;

int main(){

	int num;
	cin>>num;
	int tmp=num;
	Stack<int> sint;
	for(int i=2;i<num;i++){
		while(tmp%i==0){
			tmp/=i;
			sint.push(i);
		}
	}
	cout<<"The "<<num<<" вђзг is ";
	sint.printStack();
	cout<<sint.contains(5)<<endl;
	system("Pause");
}