#include <iostream>
#pragma once
using namespace std;
class Vector
{
	
private:
	int* a;
	int size;
public:
	class OutOfBounds
	{
	private:
		int index;
	public:
		OutOfBounds(int i) :index(i) {};
		int getIndex()const { return index; }
		void setIndex(int index) { this->index = index; }
	};
	Vector() { a = 0; size = 0; }
	Vector(int n);
	Vector(Vector&);
	~Vector() { if (a) delete[] a; }

	friend ostream& operator << (ostream& out, const Vector& b);
	friend istream& operator >> (istream& in, Vector& b);
	friend bool operator == (Vector&, Vector&);


	operator string () const;
	void AddElem(int elem);
	void AddVector(int n);
	Vector ÌultV(int k);
	double Norma();
	int& operator[](int index);
	const Vector& operator=(const Vector& b);

	int getSize()const { return size; }
	int getA()const { return *a; }
	void setSize(int size) { this->size = size; }
	void setA(int *a) { this->a = a; }
};

