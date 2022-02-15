#pragma once
#include <iostream>
#include "water_transport.h"
class boat : public water_transport
{
public:
	boat();
	boat(int weight, int lengh, int heigh, int width, int speed);
	virtual void info();
	virtual void moveforward();
	virtual void moveback();
};


