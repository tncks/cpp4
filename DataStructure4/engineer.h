#pragma once

#ifndef ENGINEER_H
#define ENGINEER_H

#include "Car.h"


template <class T>
class Engineer {
private:
	T mechanic;
public:
	int getWheelsInCar(Car*);
	void setMechanic(T);
	T getMechanic();
};

#endif