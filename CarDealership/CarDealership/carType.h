#pragma once
#include <string>
using namespace std;
class carType
{
private:
	int VIN;
	string make;
	string model;
	string category;
	int year;
	int price;
	bool sold;
	bool leased;

public:
	void setCarVin(int v);
	int getCarVin();
	void setCarMake(string m);
	string getCarMake();
	void setCarModel(string d);
	string getCarModel();
	void setCarCategory(string c);
	string getCarCategory();
	void setCarYear(int y);
	int getCarYear();
	void setCarPrice(int p);
	int getCarPrice();
	void printInfo();
	void setLease(bool l);
	bool getLease();
	void setSold(bool s);
	bool getSold();
	carType(int v, string m, string d, string c, int y, int p, bool l, bool s);
	carType();
};

