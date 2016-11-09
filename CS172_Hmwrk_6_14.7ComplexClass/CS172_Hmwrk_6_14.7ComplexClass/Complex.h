#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
private:
	//Doubles chosen because real numbers are any number along the number line
	//a is the real number portion, and b is the imaginary coefficient for a + bi
	double a;
	double b;
public:
	//Constructor functions
	//No arg constructor function
	Complex();
	//constructor with intial values for both a and b
	Complex(double a_new, double b_new);
	//constructor function which sets b to 0 and has an initial value for a
	Complex(double a_new);
	//Function to add two complex numbers with the given formulas for the problem, input of the second complex number, output of a complex number
	Complex add(const Complex & comp) const;
	//Function to subtract two complex numbers with the given formulas for the problem, input of the second complex number, output of a complex number
	Complex subtract(const Complex & comp) const;
	//Function to divide two complex numbers with the given formulas for the problem, input of the second complex number, output of a complex number
	Complex divide(const Complex & comp) const;
	//Function to multiply two complex numbers with the given formulas for the problem, input of the second complex number, output of a complex number
	Complex multiply(const Complex & comp) const;
	//Function to return the asbolute value for a complex number, no inputs
	double abs() const;
	//Function to convert the complex number to a string, no inputs, output of the number as a string
	string toString() const;
	//Getter function for a
	double getRealPart() const;
	//Getter function for b
	double getImaginaryPart() const;
	//Setter function for a
	void setRealPart(double new_a);
	//setter function for b
	void setImaginaryPart(double new_b);
	//Overloaded Operators
	//Operator for [], when index = 0, returns a, when index = 1 returns b
	double& operator[](int index);
	//Operator for +=, input of second complex number, output of complex number
	Complex& operator+= (const Complex & comp);
	//Operator for -=,input of second complex number, output of complex number
	Complex& operator-=(const Complex & comp);
	//Operator for *=, input of second complex number, output of complex number
	Complex& operator*=(const Complex & comp);
	//Operator for /=, input of second complex number, output of complex number
	Complex& operator/=(const Complex & comp);
	//unary -, no input, returns same complex number but *-1 for both a and b
	Complex  operator-();
	//unary +, no input, returns same complex number but with positve a and b
	Complex operator+();
	//Postfix ++ and -- operator functions, input of dummy variable to differentiate from prefix, output of complex number 
	Complex operator++(int dummy);
	Complex operator--(int dummy);
	//Prefix ++ and -- operators, no input, output of complex numbers
	Complex& operator++();
	Complex& operator--();
	//Output operator, input of complex number to be outputted and ostream variable for output
	friend ostream& operator<<(ostream& out, const Complex& comp);
	//>> operator, input of istream in variable and a complex number to hold the values
	friend istream& operator >> (istream& in, Complex& comp);
};

//Nonmember functions
//+ operator, input of both complex numbers to be added, output of complex number
Complex operator+(const Complex& comp1, Complex& comp2);
//- operator, input of both complex numbers to be subtracted, output of complex number
Complex operator-(const Complex& comp1, Complex& comp2);
//* operator, input of both complex numbers to be multiplied, output of complex number
Complex operator*(const Complex& comp1, Complex& comp2);
// /operator, input of both complex numbers to be divided, output of complex number
Complex operator/(const Complex& comp1, Complex& comp2);

#endif