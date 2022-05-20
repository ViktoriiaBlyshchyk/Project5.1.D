#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
	Pair a, b;
	cin >> a >> b;

	try
	{
		cout << "a == b : "; 
		if (a == b)
			cout << "True\n";
		else
			cout << "False\n";
	}

	catch (E e)
	{
		cout << e.What() << endl << endl;
	}

	catch (Error& e)
	{
		cout << e.What() << endl << endl;
	}

	catch (bad_exception a)
	{
		cout << a.what() << endl << endl;
	}


	Complex x, y;
	cin >> x >> y;

	try
	{
		cout << "x * y = " << x * y << endl << endl;
		cout << "x + y = " << x + y << endl << endl;
		cout << "x == y : ";
		if (x == y)
			cout << "True\n" << endl;
		else
			cout << "False\n" << endl;
	}

	catch (E e)
	{
		cout << e.What() << endl << endl;
	}

	catch (Error& e)
	{
		cout << e.What() << endl << endl;
	}

	catch (bad_exception a)
	{
		cout << a.what() << endl << endl;
	}

	return 0;
}
