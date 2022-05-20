#include "Pair.h"

Pair::Pair()
	: x(0), y(0)
{}

Pair::Pair(const double x, const double y)
	: x(x), y(y)
{}

Pair::Pair(const Pair& p)
	: x(p.x), y(p.y)
{}


Pair::operator string () const
{
	stringstream ss;
	ss << "( " << x << ", " << y << " )";

	return ss.str();
}

ostream& operator << (ostream& out, const Pair& p)
{
	return out << string(p);
}

istream& operator >> (istream& in, Pair& p)
{
	cout << "x = "; in >> p.x;
	cout << "y = "; in >> p.y;
	cout << endl;

	return in;
}

bool operator == (const Pair& p1, const Pair& p2)
{
	if (p1.GetX() == 0) { throw E("E: error"); }
	if (p1.GetY() == 1) { throw Error("Error: error"); }
	if (p2.GetX() != 0) { throw bad_exception(); }

	return (p1.x == p2.x && p1.y == p2.y);
}

bool operator != (const Pair& p1, const Pair& p2)
{
	return !(p1 == p2);
}

bool operator > (const Pair& p1, const Pair& p2)
{
	return (p1.x > p2.x) || ((p1.x == p2.x) && (p1.y > p2.y));
}

bool operator < (const Pair& p1, const Pair& p2)
{
	return (p1.x < p2.x) || ((p1.x == p2.x) && (p1.y < p2.y));
}

bool operator >= (const Pair& p1, const Pair& p2)
{
	return !(p1 < p2);
}

bool operator <= (const Pair& p1, const Pair& p2)
{
	return !(p1 > p2);
}
