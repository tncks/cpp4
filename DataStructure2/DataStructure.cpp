#include "stdafx.h"
#include <iostream>
#include <string>
#include "suv.h"
#include "engineer.h"
#include "motorcycle.h"

using namespace std;

int main()
{
	Car* myCar = new Car(4, 10000);
	Car usedCar = *myCar;

	cout << "Used car has " << usedCar.getWheels() << " wheels" << endl;
	cout << "The price is " << usedCar.getPrice() << endl;

	return 0;
}