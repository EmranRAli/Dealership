#include <iostream>
using namespace std;
#include "CarType.h"
#include "oldType.h"
#include "newType.h"
#include <vector>
#include <string>


int main()
{
	vector <oldType> vect1;
	vector <newType> vect2;

	newType ob1(1234, "Acura", "MDX", "new", 2008, 8000, false, false, "5 Years");
	newType ob2(1234, "Jeep", "Compass", "new", 2015, 12000, false, false, "10 Years");
	newType ob3(1234, "Honda", "Accord", "new", 2012, 7500, false, false, "7 Years");
	newType ob4(1234, "Dodge", "Ram", "new", 2019, 15000, false, false, "6 Years");
	newType ob5(1234, "Dodge", "Challenger", "new", 2017, 22000, false, false, "8 Years");
	oldType ob6(4567, "Chevy", "Cruze", "old", 2012, 10000, false, false, 56000);
	oldType ob7(4567, "Chevy", "Camaro", "old", 2010, 8200, false, false, 77200);
	oldType ob8(4567, "Hyundai", "Sonata", "old", 2006, 4000, false, false, 86320);
	oldType ob9(4567, "Chrysler", "300", "old", 2014, 9500, false, false, 67910);
	oldType ob10(4567, "Lincon", "Navigator", "old", 2016, 13000, false, false, 91101);

	vect1.push_back(ob6);
	vect1.push_back(ob7);
	vect1.push_back(ob8);
	vect1.push_back(ob9);
	vect1.push_back(ob10);
	vect2.push_back(ob1);
	vect2.push_back(ob2);
	vect2.push_back(ob3);
	vect2.push_back(ob4);
	vect2.push_back(ob5);
}