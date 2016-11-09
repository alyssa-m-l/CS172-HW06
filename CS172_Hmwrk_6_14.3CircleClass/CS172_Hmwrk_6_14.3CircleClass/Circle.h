#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

//Class from page 390 of book, with new function headers commented
class Circle
{
private:
	double radius;
	static int numberOfObjects;
public:
	Circle();
	Circle(double radius_new);
	double getArea() const;
	double getRadius() const;
	void setRadius(double radius_new);
	static int getNumberOfObjects();
	//Operator function to return bool valuies for radii < comparison, input of other circle, output of bool
	bool operator<(const Circle& c2) const;
	//Operator function to return bool values for radii <= comparison, input of other circle, output of bool
	bool operator<=(const Circle & c2) const;
	//Operator function to return bool values for radii > comparison, input of other circle, output of bool
	bool operator>(const Circle & c2) const;
	//Operator function to return bool values for radii >= comparison, input of other circle, output of bool
	bool operator >=(const Circle & c2) const;
	//Operator function to return bool values for radii == comparison, input of other circle, output of bool
	bool operator==(const Circle & c2) const;
	//Operator function to return bool values for radii != comparison, input of other circle, output of bool
	bool operator !=(const Circle & c2) const;
};

#endif
