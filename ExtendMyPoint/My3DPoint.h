#pragma once
#ifndef MY3DPOINT_H
#define MY3DPOINT_H
#include "MyPoint.h"


class My3DPoint:MyPoint
{
public:
	My3DPoint();
	My3DPoint(double x,double y,double z);
	double distance(My3DPoint point);
	double getZ();
private:
	double z;
};
#endif
