#include "stdafx.h"
#include <iostream>
#include "Car.h"

Car::Car()
{
	this->wheels = 0;
	this->price = 0;
	std::cout << "Instance is created!" << std::endl;
}

Car::Car(int _wheels, int _price)
{
	this->wheels = _wheels;
	this->price = _price;
	std::cout << "Instance is created with wheels(" << _wheels << "), price(" << _price << ")" << std::endl;
}

Car::~Car()
{
	std::cout << "Instance is deleted!" << std::endl;
}

void Car::setWheels(int _wheels)
{
	this->wheels = _wheels;
}

void Car::setPrice(int _price)
{
	this->price = _price;
}

int Car::getWheels()
{
	return this->wheels;
}

int Car::getPrice()
{
	return this->price;
}

void Car::beep()
{
	std::cout << "Basic horne" << std::endl;
}

Car& Car::operator=(const Car& rightCar)
{
	this->wheels = rightCar.wheels;
	this->price = rightCar.price;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Car& car)
{
	os << "This car has " << car.wheels << " wheels, and the price is " << car.price;
	return os;
}