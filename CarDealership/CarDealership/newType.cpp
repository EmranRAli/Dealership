#include "newType.h"
#include <iostream>

void newType::setCarWarranty(string w)
{
	warranty = w;
}

string newType::getCarWarranty()
{
	return warranty;
}

void newType::printInfo()
{
	cout << "Make: " << getCarMake() << endl;
	cout << "Model: " << getCarModel() << endl;
	cout << "Category: " << getCarCategory() << endl;
	cout << "VIN: " << getCarVin() << endl;
	cout << "Year: " << getCarYear() << endl;
	cout << "Price: " << getCarPrice() << endl;
	cout << "Warranty: " << getCarWarranty() << endl;
	cout << endl;

}

newType::newType(int v, string m, string d, string c, int y, int p, bool l, bool s, string w) :carType(v, m, d, c, y, p, l, s)
{
	setCarWarranty(w);
}
