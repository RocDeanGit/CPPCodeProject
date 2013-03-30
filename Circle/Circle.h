#pragma once
#include <string>
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
public:
	Circle();
	Circle(double radius);
	double getArea();
	double getRadius();
	void setRadius(double radius);
	bool operator<(Circle &newCircle);
	bool operator<=(Circle &newCircle);
	bool operator==(Circle &newCircle);
	bool operator!=(Circle &newCircle);
	bool operator>(Circle &newCircle);
	bool operator>=(Circle &newCircle);
private:
	double radius;
};
#endif
