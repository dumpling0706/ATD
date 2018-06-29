#include "Complex.h"

void view(const Complex &c)
{
	cout << c.Re();
	if (c.Im() >= 0)
		cout << "+";
	cout << c.Im() << "i" << endl;
}


void main() {
vector <Complex>o;

	
	Complex c;
	Complex r;
	for (int i = 0; i < 10; i++)
	
		o.push_back(Complex(i,i));
	r = o[2];
	view(r);//вывод эл вект
	o[2] = Complex(1, 4);//изменение эл вект
	view(o[2]);
	Complex a(1,2);
	Complex b(1, 2);
	float g;
	g = a.Re() + a.Im();
	view(a);
	view(b);
	(a + b).abs();
	cout <<(a+b).abs() << endl;
	
	c = a+b;
	view(c);

	
	for (int i = 0; i < 10; i++)
		view(o[i]);
   view(a + b);
   //view(a - b);
   //view(a + 5);
   //view(a / b);
  view(a*b);
   view(a * 5);
   view(a / 5);


   cout << c.abs()<<endl;

   cout << g;

   

	

	system("pause");
}
