#include "Complex.h"

Complex::Complex()
{
	SetX(0);
	SetY(0);
}

Complex::Complex(double x, double y)
{
	SetX(x);
	SetY(y);
}

Complex::Complex(const Complex& c)
{
	SetX(c.GetX());
	SetY(c.GetY());
}

Complex operator + (const Complex& a, const Complex& b)
{
	if (a.GetX() == 0) { throw E("E: error"); }
	if (a.GetY() == 0) { throw Error("Error: error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return Complex(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Complex operator * (const Complex& a, const Complex& b)
{
	if (a.GetX() == 0) { throw E("E: error"); }
	if (a.GetY() == 0) { throw Error("Error: error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return Complex(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}

bool operator == (const Complex& a, const Complex& b)
{
	if (a.GetX() == 0) { throw E("E: error"); }
	if (a.GetY() == 0) { throw Error("Error: error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}
