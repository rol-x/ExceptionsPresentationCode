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
	try
	{
		cin >> b;
		if (!cin.good())
			throw invalid_argument("You have to provide a proper number!\n");
		if (b == 0)
			throw domain_error("You attempted to divide by 0, you fool!\n");
		double result = a / b;
		cout << result << endl;
	}
	catch (domain_error dom)
	{
		cout << dom.what() << endl;
	}
	catch (invalid_argument inv)
	{
		cout << inv.what() << endl;
	}
	catch (exception exc)
	{
		cout << exc.what() << endl;
	}
}

void Divider::PerformTask()
{
	char books[12] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' };
	cout << "Welcome, student!" << endl;
	cout << "You currently have 12 books! Which one would you like to access?" << endl;
	int bookID = 0;
	try
	{
		try
		{
			cin >> bookID;
			if (cin.fail())
				throw BadInputException();

			if (bookID < 1 || bookID > 12)
				throw OutOfRange();

			cout << "Book no. " << bookID+1 << ": " << books[bookID] << endl;
		}
		catch (const BadInputException&)
		{
			cout << "You didn't provide a proper number." << endl;
			throw;
		}
		catch (const OutOfRange& exc)
		{
			cout << exc.what() << endl;
			throw;
		}
	}
	catch (const exception& exc)
	{
		cout << "Book access denied!" << endl;
	}
}

Divider::~Divider()
{
}
