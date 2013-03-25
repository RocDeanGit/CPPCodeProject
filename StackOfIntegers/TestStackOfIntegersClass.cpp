#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main(){

	int num;
	cin>>num;
	int tmp=num;
	StackOfIntegers soi;
	for(int i=2;i<num;i++){
		while(tmp%i==0){
			tmp/=i;
			soi.push(i);
		}
	}
	cout<<"The "<<num<<" вђзг is ";
	while(soi.getSize()>0){
		cout<<soi.pop()<<" ";
	}
	cout<<endl;
	system("Pause");
}