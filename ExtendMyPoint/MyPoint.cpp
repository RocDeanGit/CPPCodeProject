#include "MyPoint.h"
#include <math.h>
using namespace std;

MyPoint::MyPoint(double x,double y)
{
	this->x=x;
	this->y=y;
}

MyPoint::MyPoint()
{
	MyPoint(0,0);
}

double MyPoint::getX()
{
	return this->x;
}

double MyPoint::getY()
{
	return this->y;
}

double MyPoint::distance(MyPoint point)
{
	return sqrt(pow(this->x-point.getX(),2)+pow(this->y-point.getY(),2));
}
