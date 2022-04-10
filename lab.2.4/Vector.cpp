#include <sstream>
#include "Vector.h"

Vector::Vector(int n)
{
	a = new int[size = n];
}

Vector::Vector(Vector& arr)
{
    size = arr.size;
    a = new int[size];
    for (int i = 0; i < size; i++)
        a[i] = arr.a[i];
}

Vector::operator string() const
{
    stringstream ss;
    
    for (int i = 0; i < size; i++)
        ss << a[i] << ' ';
    return ss.str();
}

void Vector::AddElem(int elem)
{
    int* temp = new int[size + 1];
    if (a)
    {
        for (int i = 0; i < size; i++)
            temp[i] = a[i];
        delete[] a;
    }
    a = temp;
    a[size] = elem;
    size++;
}

void Vector::AddVector(int n)
{
    a = new int[size = n];
    int p;
    for (int i = 0; i < size; i++)
    {
        cout << "element = ";
        cin >> p;
        a[i] = p;
    }
    
}

Vector Vector::ÌultV(int k)
{
    Vector b;
    
    b = Vector(size);
    
    for (int i = 0; i < size; i++)
    {
        b[i] = k*a[i];
    }
    return b;
}

double Vector::Norma()
{
    double q = 0;
    for (int i = 0; i < size; i++)
    {
        q = q + a[i] * a[i];
       
    }
    return sqrt(q);
}

int& Vector::operator[](int index)
{
    if (index < 0 || index >= size)
        throw OutOfBounds(index);
    return a[index];
}

const Vector& Vector::operator=(const Vector& b)
{
    if (&b != this)
    {
        if (a)
            delete[] a;
        size = b.size;
        a = new int[size];
        for (int i = 0; i < size; i++)
            a[i] = b.a[i];
    }
    return *this;
}

ostream& operator<<(ostream& out, const Vector& b)
{
    out << string(b);
    return out;
}

istream& operator>>(istream& in, Vector& b)
{
    for (int i = 0; i < b.size; i++)
        in >> b.a[i];
    return in;
}

bool operator==(Vector& l, Vector& r)
{
    if(l.size!=r.size)
    return false;
    else
        for (int i = 0; i < l.size; i++)
        {
            if (l.a[i] != r.a[i])
                return false;

        }
    return true;
}
