#pragma once
#include <iostream>
#include <string>

#include <sstream>

using namespace std;
class Complex

{
	double re;
	double im;
public:

	Complex();
	Complex(double r, double i = 0);
	Complex(Complex&c);
	Complex & operator= (Complex &c);
	Complex  operator + (Complex &c);
	Complex operator - (Complex &c);
	Complex operator * (Complex &c);
	Complex operator / (Complex &c);
	double abs();
	double Re() const;//модуль
	double Im() const;
	Complex operator*(double s);
	Complex operator/(double s);
	Complex operator+(double s);
	Complex operator-(double s);
};


