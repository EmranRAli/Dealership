#include "oldType.h"
#include <iostream>



void oldType::setCarMileage(int g)
{
	mileage = g;
}

int oldType::getCarmileage()
{
	return mileage;
}

void oldType::printInfo()
{
	cout << "Make: " << getCarMake() << endl;
	cout << "Model: " << getCarModel() << endl;
	cout << "Category: " << getCarCategory() << endl;
	cout << "VIN: " << getCarVin() << endl;
	cout << "Year: " << getCarYear() << endl;
	cout << "Price: " << getCarPrice() << endl;
	cout << "Mileage: " << getCarmileage() << endl;
	cout << endl;
}

oldType::oldType(int v, string m, string d, string c, int y, int p, bool l, bool s, int g) :carType(v, m, d, c, y, p, l, s)
{
	setCarMileage(g);
}