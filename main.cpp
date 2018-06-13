#include "Complex.h"

void view(const Complex &c)
{
	cout << c.Re();
	if (c.Im() >= 0)
		cout << "+";
	cout << c.Im() << "i" << endl;
}


void main() {
	Complex a(15,2);
	Complex b(3, 5);
   view(a);
   view(b);
   view(a + b);
   view(a - b);
   view(a + 5);
   //view(a / b);
 /*  view(a*b);
   view(a * 5);
   view(a / 5);
   cout << a.abs();*/
   

	system("pause");
}
