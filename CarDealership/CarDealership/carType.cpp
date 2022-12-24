#include "carType.h"
#include <iostream>
using namespace std;


void carType::setCarVin(int v)
{
	VIN = v;
}

int carType::getCarVin()
{
	return VIN;
}

void carType::setCarMake(string m)
{
	make = m;
}

string carType::getCarMake()
{
	return make;
}

void carType::setCarModel(string d)
{
	model = d;
}

string carType::getCarModel()
{
	return model;
}

void carType::setCarCategory(string c)
{
	category = c;
}

string carType::getCarCategory()
{
	return category;
}

void carType::setCarYear(int y)
{
	year = y;
}


int carType::getCarYear()
{
	return year;
}

void carType::setCarPrice(int p)
{
	price = p;
}

int carType::getCarPrice()
{
	return price;
}

void carType::printInfo()
{
	cout << "Make: " << getCarMake() << endl;
	cout << "Model: " << getCarModel() << endl;
	cout << "Category: " << getCarCategory() << endl;
	cout << "VIN: " << getCarVin() << endl;
	cout << "Year: " << getCarYear() << endl;
	cout << "Price: " << getCarPrice() << endl;
	cout << endl;
}

void carType::setLease(bool l)
{
	leased = l;
}

bool carType::getLease()
{
	return leased;
}

void carType::setSold(bool s)
{
	sold = s;
}

bool carType::getSold()
{
	return sold;
}


carType::carType(int v, string m, string d, string c, int y, int p, bool l, bool s)
{
	VIN = v;
	make = m;
	model = d;
	category = c;
	year = y;
	price = p;
	leased = l;
	sold = s;

}

carType::carType()
{
	VIN = 0;
	make = "";
	model = "";
	category = "";
	year = 0;
	price = 0;
	leased = false;
	sold = false;
}