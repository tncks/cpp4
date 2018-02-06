#include "stdafx.h"
#include "engineer.h"

template <class T>
int Engineer::getWheelsInCar(Car* car)
{
	return car->wheels;
}

template <class T>
void Engineer::setMechanic(T _mechanic)
{
	this->mechanic = _mechanic;
}

template <class T>
T Engineer ::getMechanic()
{
	return this->mechanic;
}