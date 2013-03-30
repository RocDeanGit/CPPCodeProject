#include "Circle.h"
#include <string>
using namespace std;

Circle::Circle()
{
	Circle(1);
}

Circle::Circle(double radius)
{
	this->radius=radius;
}

double Circle::getRadius()
{
	return this->radius;
}

void Circle::setRadius(double radius)
{
	this->radius=radius;
}

double Circle::getArea()
{
	return radius*radius*3.14159;
}

bool Circle::operator<(Circle &newCircle)
{
	return this->getRadius()<newCircle.getRadius()?true:false;
}

bool Circle::operator<=(Circle &newCircle)
{
	return this->getRadius()<=newCircle.getRadius()?true:false;
}

bool Circle::operator==(Circle &newCircle)
{
	return this->getRadius()==newCircle.getRadius()?true:false;
}

bool Circle::operator!=(Circle &newCircle)
{
	return this->getRadius()!=newCircle.getRadius()?true:false;
}

bool Circle::operator>(Circle &newCircle)
{
	return this->getRadius()>newCircle.getRadius()?true:false;
}

bool Circle::operator>=(Circle &newCircle)
{
	return this->getRadius()>=newCircle.getRadius()?true:false;
}
