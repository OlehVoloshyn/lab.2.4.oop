#include"Vector.h"
#include<iostream>
using namespace std;
int main()
{
	Vector a, b, c, d;
	bool y;
	

	c = Vector(a);

	cout << "Input vector = " << endl;
	a.AddVector(2);
	cout << endl;
	b.AddVector(2);
	d = a.ÌultV(2);
	cout << "multiplication of a vector by a scalar =  " << d << endl;
	cout << endl;

	cout << "comparison = ";
	if (a == b)
		cout <<"true" << endl;
	else
	{
		cout << "false" << endl;
	}

	cout << endl;

	cout << "Norma =";
	cout << a.Norma() << endl;
	return 0;
}