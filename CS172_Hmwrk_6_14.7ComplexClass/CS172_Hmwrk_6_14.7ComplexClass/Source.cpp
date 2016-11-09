//Name: Alyssa La FLeur
//Class CS172
//Homework 6
//Problem: EX06_05 14.7: Math The Complex Class
//Purpose:  A program with a class Complex, which countains complex numbers, and has overloaded operators for +,-,*,/,+=,-=,*=,/=,[],unary- and +, prefix++ and --, postfix ++ and --, <<, and >>, with +,-,*,/ as nonmember functions

#include<iostream>
#include "Complex.h"
using namespace std;

//Requested test function, with two complex numbers and output
int main()
{
	int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
	cout << "Enter the first complex number (a then b): " << endl;
	cin >> a1;
	cin >> b1;
	cout << "Enter the second complex number (a then b): " << endl;
	cin >> a2;
	cin >> b2;
	Complex c1(a1, b1);
	Complex c2(a2,b2);
	cout << "(" << c1 << ") " << " + " << " (" << c2 << ")" << " = " << c1 + c2 << endl;
	cout << "(" << c1 << ") " << " - " << " (" << c2 << ")" << " = " << c1 - c2 << endl;
	cout << "(" << c1 << ") " << " * " << " (" << c2 << ")" << " = " << c1 * c2 << endl;
	cout << "(" << c1 << ") " << " / " << " (" << c2 << ")" << " = " << c1 / c2 << endl;
	cout << "|" << c1 << "|" << "=" << c1.abs() << endl;
	return 0;
}