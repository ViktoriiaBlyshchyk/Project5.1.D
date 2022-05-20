#pragma once
#include "Pair.h"

class Complex :
	public Pair
{
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend bool operator == (const Complex&, const Complex&);
};

