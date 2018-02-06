#include "stdafx.h"
#include <iostream>
#include <string>
#include "suv.h"

using namespace std;

int main()
{
	SUV* newSUV = new SUV();

	newSUV->setSpareWheels(2);
	cout << "Spare wheels are " << newSUV->getSpareWheels() << endl;

	newSUV->setPrice(5000);
	cout << "The price is " << newSUV->getPrice() << endl;

	cout << "The total number of wheels are : " << newSUV->getTotalWheels() << endl;

	delete newSUV;

	return 0;
}