#include "pch.h"
#include "Divider.h"

using namespace std;

Divider::Divider()
{
}

void Divider::DivideUnprotected()
{
	int a, b;
	cout << "Pass first number: ";
	cin >> a;
	cout << "Pass second number (PLEASE DON'T GIVE 0): ";
	cin >> b;
	int result = a / b;
	cout << result;
}


void Divider::DivideProtected()
{
	int a, b;
	double result = 0;
	cout << "Pass first number: ";
	cin >> a;
	cout << "Pass second number (type what you want, whatever): ";
	cin >> b;
	try
	{
		if (b == 0)
			throw exception();
		double result = a / b;
		cout << result;
	}
	catch(exception exc)
	{
		cout << exc.what() << endl;
	}
}

void Divider::DivideSpecialized()
{
	int a, b;
	double result = 0;
	cout << "Pass first number: ";
	cin >> a;
	cout << "Pass second number (type what you want, whatever): ";
	cin >> b;
	try
	{
		if (b == 0)
			throw domain_error("You attempted to divide by 0, you fool!");
		double result = a / b;
		cout << result;
	}
	catch (domain_error exc)
	{
		cout << exc.what();
	}
	catch (overflow_error ovr)
	{
		cout << ovr.what() << endl;
	}
}

Divider::~Divider()
{
}
