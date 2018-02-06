#include "stdafx.h"
#include "suv.h"

void SUV::setSpareWheels(int _spareWheels)
{
	this->spareWheels = _spareWheels;
}

int SUV::getSpareWheels()
{
	return this->spareWheels;
}

int SUV::getTotalWheels()
{
	return (this->spareWheels + this->wheels);
}