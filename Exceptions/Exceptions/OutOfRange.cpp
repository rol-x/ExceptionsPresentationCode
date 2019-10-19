#include "pch.h"
#include "OutOfRange.h"


OutOfRange::OutOfRange()
{
}

const char* OutOfRange::what() const noexcept
{
	return "Please provide a number between 1 and 12";
}

OutOfRange::~OutOfRange()
{
}
