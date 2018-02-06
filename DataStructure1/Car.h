#pragma once

#ifndef CAR_H
#define CAR_H

class Car {
protected:
	int wheels;
	int price;
public:
	Car();
	Car(int, int);
	~Car();
	void setWheels(int);
	void setPrice(int);
	int getWheels();
	int getPrice();
};

#endif