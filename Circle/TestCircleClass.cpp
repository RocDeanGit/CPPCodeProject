#include "Circle.h"
#include <iostream>
using namespace std;
int main(){
	Circle c[]={Circle(5),Circle(4),Circle(1),Circle(9),Circle(7),Circle(2),Circle(3),Circle(10),Circle(15),Circle(6)};
	Circle tmp;
	for(int i=0;i<10;i++){
		for(int j=0;j<9;j++){
			if(c[j]>c[j+1]){
				tmp=c[j];
				c[j]=c[j+1];
				c[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<c[i].getRadius()<<" ";
	}
	cout<<endl;
	system("Pause");
}
