#include "My3DPoint.h"
#include <math.h>
#include <iostream>
using namespace std;
My3DPoint::My3DPoint()
{
	My3DPoint(0,0,0);
}

My3DPoint::My3DPoint(double x,double y,double z):MyPoint(x,y)
{	
	this->z=z;	
}

double My3DPoint::getZ()
{
	return this->z;
}

double My3DPoint::distance(My3DPoint point)
{
	double dx,dy,dz;
	dx=this->getX()-point.getX();
	dy=this->getY()-point.getY();
	dz=this->getZ()-point.getZ();
	return sqrt(pow(dx,2)+pow(dy,2)+pow(dz,2));
}