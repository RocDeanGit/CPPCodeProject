#include "Circle.h"
#include <iostream>
using namespace std;
int main(){
	int n;	
	double radius;
	Circle c[100];
	Circle tmp;
	cout<<"������Ҫ������Բ������:";
	cin>>n;
	cout<<"�����������Բ�İ뾶"<<endl;
	for(int i=0;i<n;i++){
		cin>>radius;
		c[i]=Circle(radius);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(c[j]>c[j+1]){
				tmp=c[j];
				c[j]=c[j+1];
				c[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<c[i].getRadius()<<" ";
	}
	cout<<endl;
	system("Pause");
}
