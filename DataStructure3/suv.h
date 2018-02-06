#pragma once

#include "Car.h"

class SUV : public Car {
private:
	int spareWheels;
public:
	void setSpareWheels(int);
	int getSpareWheels();

	int getTotalWheels();
};