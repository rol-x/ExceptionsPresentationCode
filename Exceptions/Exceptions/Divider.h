#pragma once
#include <iostream>
#include "OutOfRange.h"
#include "BadInputException.h"

class Divider
{
public:
	Divider();
	void DivideUnprotected();
	void DivideProtected();
	void DivideSpecialized();
	void PerformTask();
	~Divider();
};


