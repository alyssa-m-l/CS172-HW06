#include<iostream>
#include <sstream>
#include <cmath>
#include "Complex.h"
using namespace std;

//See header for more detialed input/output descriptions of member and nonmember functions/methods
//No arg constructor
Complex::Complex()
{
	a = 0;
	b = 0;
}

//Constuctor with initial values for a and b
Complex::Complex(double a_new, double b_new)
{
	a = a_new;
	b = b_new;
}

//Construtor with intial value for a only, sets b to 0
Complex::Complex(double a_new)
{
	a = a_new;
	b = 0;
}

//Function to add complex numbers
Complex Complex::add(const Complex & comp) const
{
	//Calculating new a and b
	double new_a = a + comp.getRealPart();
	double new_b = b + comp.getImaginaryPart();
	//Returning new Complex number
	return Complex(new_a, new_b);
}

//Function to subtract two complex numebrs
Complex Complex::subtract(const Complex & comp) const
{
	//Calculating new a and b
	double new_a = a - comp.getRealPart();
	double new_b = b - comp.getImaginaryPart();
	//Returning new Complex number
	return Complex(new_a, new_b);
}

//Function to divide two complex numbers
Complex Complex::divide(const Complex & comp) const
{
	//Calculating new a and b
	double c = comp.getRealPart();
	double d = comp.getImaginaryPart();
	double bottom = (c * c) + (d * d);
	double new_a = ((a*c) + (b*d)) / bottom;
	double new_b = ((b * c) - (a *d)) / bottom;
	//Returning new complex number
	return Complex(new_a, new_b);
}

//Function to multiply two complex numbers
Complex Complex::multiply(const Complex & comp) const
{
	//Calculating new a and b
	double c = comp.getRealPart();
	double d = comp.getImaginaryPart();
	double new_a = (a*c) - (b*d);
	double new_b = (b* c) + (a *d);
	//Returning new complex number
	return Complex(new_a, new_b);
}

//Function to calculate the absolute value of a complex number
double Complex::abs() const
{
	//Calculating absolute value
	double inside = pow(a, 2) + pow(b, 2);
	//returnign absolute value
	return pow(inside, 0.5);
}

//Function to convert complex number to a string
string Complex::toString() const
{
	stringstream ss;
	//If b is positive, uses +
	if (b > 0)
	{
		ss << a << " + " << b << "i";
	}
	//if b is negative, - already present on number
	if (b < 0)
	{
		ss << a << b << "i";
	}
	//if b is 0, uses +
	if (b == 0)
	{
		ss << a << " + " << b << "i";
	}
	return ss.str();
}

//Getter for a
double Complex::getRealPart() const
{
	return a;
}

//Getter for b
double Complex::getImaginaryPart() const
{
	return b;
}

//Setter for a
void Complex::setRealPart(double new_a)
{
	a = new_a;
}

//Setter for b
void Complex::setImaginaryPart(double new_b)
{
	b = new_b;
}

//Operator functions:
// []operator, if index = 0 returns a if index = 1 returns b
double& Complex::operator[](int index)
{
	if (index == 0)
	{
		return a;
	}
	else if (index == 1)
	{
		return b;
	}
	else
	{
		cout << "Invalid input, returning b" << endl;
		return b;
	}
}

// += operator function
Complex& Complex::operator+= (const Complex & comp)
{
	//Calling add then returns result
	*this = add(comp);
	return *this;
}

// -= operator function
Complex& Complex::operator-=(const Complex & comp)
{
	//Calls subtract for new number and returns results
	*this = subtract(comp);
	return *this;
}

// *= operator function
Complex& Complex::operator*=(const Complex & comp)
{
	//Calls multiply and returns result
	*this = multiply(comp);
	return *this;

}

// /= operator function
Complex& Complex::operator/=(const Complex & comp)
{
	//Calls divide and returns results
	*this = divide(comp);
	return *this;
}

// - operator
Complex Complex::operator-()
{
	// multiples a and b by negative one, returns complex number
	return Complex(-a, -b);
}

// + operator function
Complex Complex::operator+()
{
	//Assumign this means multiply by 1, returns same complex number
	return Complex(a, b);
}

//Postfix
// ++ operator function
Complex Complex::operator++(int dummy)
{
	Complex temp(a, b);
	//Assuming for ++, the method is supposed to increment by 1 + 0i
	//Increments a and returns original complex number
	a++;
	return temp;
}

// -- operator 
Complex Complex::operator--(int dummy)
{
	Complex temp(a, b);
	//Assuming for --, the method is supposed to decrement by 1 + 0i
	//Decrements a, then returns original complex number
	a--;
	return temp;
}

//Prefix
//Same assumptions about methods for ++/-- purpose made as above
// ++ operator
Complex& Complex::operator++()
{
	//Increments a and returns incremented complex number
	a++;
	return *this;
}

// -- operator
Complex& Complex::operator--()
{
	//decrements a and returns decremented complex number
	a--;
	return *this;
}

// << operator function, for output of complex numbers
ostream& operator<<(ostream& out, const Complex& comp)
{
	//Uses tostring to reduce length
	out << comp.toString();
	//Returns ostream out
	return out;
}

// >> operator for Complex
istream& operator >> (istream& in, Complex& comp)
{
	//Asking for entry of variables, usign in to get varaibles
	cout << "Enter real number: " << endl;
	in >> comp.a;
	cout << "Enter imaginary coefficent: " << endl;
	in >> comp.b;
	//Returning istream in
	return in;
}

//Nonmember functions

// + operator
Complex operator+(const Complex& comp1, Complex& comp2)
{
	//Returns the numbers added with add
	return comp1.add(comp2);
}

// - operator function
Complex operator-(const Complex& comp1, Complex& comp2)
{
	//Returns numbers subtracted with subtract
	return comp1.subtract(comp2);
}
// * operator function
Complex operator*(const Complex& comp1, Complex& comp2)
{
	//Returns numbers multiplied with multiply
	return comp1.multiply(comp2);
}
// / operator function
Complex operator/(const Complex& comp1, Complex& comp2)
{
	//Returns numbers divided with divide function
	return comp1.divide(comp2);
}
