#include <iostream>
#include "StackOfIntegers.h"
#include "EmptyStackException.h"
using namespace std;

int main(){

	int num;
	cin>>num;
	int tmp=num;
	StackOfIntegers soi;
	for(int i=2;i<=num;i++){
		while(tmp%i==0){
			tmp/=i;
			soi.push(i);
		}
	}
	cout<<"The "<<num<<" вђзг is ";
	try{
		while(soi.getSize()+1>0){
			cout<<soi.pop()<<" ";
		}
	}
	catch(EmptyStackException &e){
		cout<<endl<<e.what()<<endl;
	}
	cout<<endl;
	system("Pause");
}