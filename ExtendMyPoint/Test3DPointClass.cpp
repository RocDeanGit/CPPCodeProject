#include "My3DPoint.h"
#include <iostream>
using namespace std;
int main(){

	My3DPoint p1,p2;
	p1= My3DPoint(0,0,0);
	p2= My3DPoint(10,30,25.5);

	cout<<"distance between p1 and p2 is "<<p2.distance(p1)<<endl;
	system("Pause");
	return 0;
}