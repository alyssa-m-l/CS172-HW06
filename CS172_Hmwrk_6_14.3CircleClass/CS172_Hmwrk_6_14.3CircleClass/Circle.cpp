#include <iostream>
#include "Circle.h"
using namespace std;

//All functions below from page 390 of book for Cirlce class implementation unless otherwise commented
int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}
Circle::Circle(double radius_new)
{
	radius = radius_new;
	numberOfObjects++;
}
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setRadius(double radius_new)
{
	radius = (radius_new >= 0) ? radius_new : 0;
}
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}
//New implementation
//Operator function to return bool valuies for radii < comparison, input of other circle, output of bool
bool Circle::operator<(const Circle& c2) const
{
	bool ret = false;
	//Checking if radius1<radius2
	if (radius < c2.getRadius())
	{
		ret = true;
	}
	return ret;
}

//Operator function to return bool values for radii <= comparison, input of other circle, output of bool
bool Circle::operator<=(const Circle & c2) const
{
	bool ret = false;
	//Checking if radius<= radius2
	if (radius <= c2.getRadius())
	{
		ret = true;
	}
	return ret;
}

//Operator function to return bool values for radii > comparison, input of other circle, output of bool
bool Circle::operator>(const Circle & c2) const
{
	bool ret = false;
	//Checking if radius > radius2
	if (radius > c2.getRadius())
	{
		ret = true;
	}
	return ret;
}

//Operator function to return bool values for radii >= comparison, input of other circle, output of bool
bool Circle::operator >=(const Circle & c2) const
{
	bool ret = false;
	//Checking if radius >= radius2
	if (radius >= c2.getRadius())
	{
		ret = true;
	}
	return ret;
}

//Operator function to return bool values for radii == comparison, input of other circle, output of bool
bool Circle::operator==(const Circle & c2) const
{
	bool ret = false;
	//Checking if radius == radius 2
	if (radius == c2.getRadius())
	{
		ret = true;
	}
	return ret;
}

//Operator function to return bool values for radii != comparison, input of other circle, output of bool
bool Circle::operator !=(const Circle & c2) const
{
	bool ret = false;
	//Checking if radius != radius 2
	if (radius != c2.getRadius())
	{
		ret = true;
	}
	return ret;
}