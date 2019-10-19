#pragma once
#include <exception>
#include <string>
#include <iostream>

using namespace std;

class OutOfRange : public exception
{
public:
	OutOfRange();
	const char* what() const noexcept;
	virtual ~OutOfRange() noexcept;
};

