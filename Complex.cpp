#include "Complex.h"


Complex::Complex()
{
}

Complex::Complex(double r, double i ) // конструктор по умолчанию
{
	re = r;
	im = i;
}

Complex::Complex(Complex &c) // конструктор копирования
{
	re = c.re;
	im = c.im;

}



Complex & Complex::operator=(Complex & c)
{
	re = c.re;
	im = c.im;

	return (*this);
}



Complex  Complex::operator + (Complex &c) {
	Complex temp;

	temp.re = re + c.re;
	temp.im = im + c.im;

	return temp;
}

Complex Complex::operator - (Complex &c){
	Complex temp;

	temp.re = re - c.re;
	temp.im = im - c.im;

	return temp;
}

Complex Complex::operator * (Complex &c)
{
	return Complex(re*c.Re() - im * c.Im(), re*c.Im() + c.Re()*im);
}
Complex Complex::operator / (Complex &c) {
	return Complex((re*c.Re() +im *c.Im()) / (c.Re()*c.Re() + c.Im()*c.Im()), (im*c.Re()-re*c.Im()) / (c.Re()*c.Re() + c.Im()*c.Im()));
}
double Complex :: abs()
{ return sqrt(re * re + im * im);
}
Complex Complex::operator *(double s) {
	Complex temp;
	temp.re = re*s;
	temp.im = im*s;
	return  temp;
}
Complex Complex::operator / (double s) {
	Complex temp;
	temp.re = re/s;
	temp.im = im/s;
	return  temp;
}

Complex Complex::operator + (double s) {
	Complex temp;
	temp.re = re +s;
	temp.im = im ;
	return  temp;
}



Complex Complex::operator - (double s) {
	Complex temp;
	temp.re = re - s;
	temp.im = im;
	return  temp;
}


double Complex::Re() const
{
	return re;
}

double Complex::Im() const
{
	return im;
} 

