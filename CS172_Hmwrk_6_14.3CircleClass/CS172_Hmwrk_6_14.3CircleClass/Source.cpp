//Name: Alyssa La Fleur
//Class CS172
//Homework 6
//Problem EX06_04: 14.3 The Circle Class
//Purpose:  To modify the Circle class in 10.9 to have overloaded operators <, <=, ==, !=, >, and >= to compare circles according to their radii

#include <iostream>
#include "Circle.h"
using namespace std;

//Test program of all overloaded operators
int main()
{
	//Declaring test circles
	Circle c1(1.0);
	Circle c2(2.0);
	Circle c3(1.0);
	//Use of all ordering operators overloaded
	if (c1 < c2)
	{
		cout << " < working" << endl;
	}
	if (c1 <= c2)
	{
		cout << "<= working" << endl;
	}
	if (c2 > c3)
	{
		cout << "> working" << endl;
	}
	if (c2 >= c3)
	{
		cout << ">= working" << endl;
	}
	if (c1 == c3)
	{
		cout << "== working" << endl;
	}
	if (c1 != c2)
	{
		cout << "!= working " << endl;
	}
	return 0;
}