#pragma once
#include <exception>

using namespace std;

class BadInputException : public exception
{
public:
	BadInputException();
	virtual ~BadInputException() noexcept;
};

