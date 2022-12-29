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

	int userinput = 0;
	string inp;
	string inp1;
	string inp2;
	string inp3;
	int inp4;
	string inp5;
	string inp6;
	string inp7;
	int inp8;
	int inp9;
	string inp10;
	int inp11;

	while (userinput != 5) {
		cout << "Select an option: " << endl;
		cout << "1. Search Inventory" << endl;
		cout << "2. Sell/Lease cars" << endl;
		cout << "3. Return a leased car" << endl;
		cout << "4. Add cars to inventory" << endl;
		cout << "5. Exit" << endl;
		cin >> userinput;



		if (userinput == 1)
		{
			cout << "Do you want to search by make, model, or category(old or new): " << endl;
			cin >> inp;
			if (inp == "make")
			{
				cout << "Enter make: ";
				cin >> inp;
				cout << endl;
				for (int i = 0; i < vect1.size(); i++)
				{
					if (vect1[i].getCarMake() == inp)
					{
						vect1[i].printInfo();
					}



				}


				for (int i = 0; i < vect2.size(); i++)
				{
					if (vect2[i].getCarMake() == inp)
					{
						vect2[i].printInfo();
					}

				}
			}
			else if (inp == "model")
			{
				cout << "Enter model: ";
				cin >> inp;
				cout << endl;
				for (int i = 0; i < vect1.size(); i++)
				{
					if (vect1[i].getCarModel() == inp)
					{
						vect1[i].printInfo();
					}

				}


				for (int i = 0; i < vect2.size(); i++)
				{
					if (vect2[i].getCarModel() == inp)
					{
						vect2[i].printInfo();
					}

				}
			}
			else if (inp == "category")
			{
				cout << "Enter category(new or old): ";
				cin >> inp;
				cout << endl;
				for (int i = 0; i < vect1.size(); i++)
				{
					if (vect1[i].getCarCategory() == inp)
					{
						vect1[i].printInfo();
					}

				}

				for (int i = 0; i < vect2.size(); i++)
				{
					if (vect2[i].getCarCategory() == inp)
					{
						vect2[i].printInfo();
					}
				}
			}
		}
		cout << endl << endl;

		if (userinput == 2)
		{
			cout << "Which car would you like to Lease/Buy(search by make): " << endl;
			for (int y = 0; y < vect1.size(); y++)
			{
				vect1[y].printInfo();
			}
			cout << endl;
			for (int x = 0; x < vect2.size(); x++)
			{
				vect2[x].printInfo();
			}
			cin >> inp1;
			for (int v = 0; v < vect1.size(); v++)
			{
				if (vect1[v].getCarMake() == inp1)
				{
					cout << "Would you like to lease or buy the car?" << endl;
					cin >> inp2;
					if (inp2 == "lease")
					{
						if (vect1[v].getLease() == true)
						{
							cout << "Car has already been leased" << endl;
						}
						else
						{
							vect1[v].setLease(true);
							cout << "Car Succesfully leased" << endl << endl;
						}

					}
					else if (inp2 == "buy")
					{
						if (vect1[v].getSold() == true)
						{
							cout << "Car has already been sold" << endl << endl;
						}
						else {
							vect1[v].setSold(true);
							cout << "Car succesfully bought" << endl << endl;
						}
					}

				}

			}
			for (int s = 0; s < vect2.size(); s++)
			{
				if (vect2[s].getCarMake() == inp1)
				{
					cout << "Would you like to lease or buy the car?" << endl;
					cin >> inp2;
					if (inp2 == "lease")
					{
						if (vect2[s].getLease() == true)
						{
							cout << "Car is already leased" << endl;
							break;
						}
						else
						{
							vect2[s].setLease(true);
							cout << "Car Succesfully leased" << endl << endl;
							break;
						}


					}
					else if (inp2 == "buy")
					{
						if (vect2[s].getSold() == true)
						{
							cout << "Car has already been sold" << endl;
							break;
						}
						else
						{
							vect2[s].setSold(true);
							cout << "Car succesfully bought" << endl << endl;
							break;
						}
					}


				}

			}





		}

		if (userinput == 3)
		{
			cout << "Which Car would you like to return(enter make of car): " << endl;
			for (int i = 0; i < vect1.size(); i++)
			{
				vect1[i].printInfo();
			}
			cout << endl;
			for (int y = 0; y < vect2.size(); y++)
			{
				vect2[y].printInfo();
			}
			cin >> inp3;

			for (int s = 0; s < vect1.size(); s++)
			{
				if (vect1[s].getCarMake() == inp3)
				{

					if (vect1[s].getLease() == false)
					{
						cout << "Car is not leased" << endl;
					}
					else
					{
						vect1[s].setLease(false);
						cout << "Car Succesfully returned" << endl << endl;

					}

				}

			}

			for (int i = 0; i < vect2.size(); i++)
			{
				if (vect2[i].getCarMake() == inp3)
				{

					if (vect2[i].getLease() == false)
					{
						cout << "Car is not leased" << endl;
					}
					else
					{
						vect2[i].setLease(false);
						cout << "Car Succesfully returned" << endl << endl;

					}

				}

			}
		}
		if (userinput == 4)
		{
			cout << "Enter Vehicle Vin: ";
			cin >> inp4;
			cout << "\nEnter vehicle make: ";
			cin >> inp5;
			cout << "\nEnter vehicle model: ";
			cin >> inp6;
			cout << "\nEnter vehicle category(new or old): ";
			cin >> inp7;
			cout << "\nEnter vehicle year: ";
			cin >> inp8;
			cout << "\nEnter Vehicle price: ";
			cin >> inp9;
			if (inp7 == "new")
			{
				cout << "\nEnter warranty for car(Number of years): ";
				cin.get();
				getline(cin, inp10);
				newType* obj = new newType(inp4, inp5, inp6, inp7, inp8, inp9, false, false, inp10);
				vect2.push_back(*obj);
			}
			else if (inp7 == "old")
			{
				cout << "\nEnter mileage for car: ";
				cin >> inp11;
				oldType* obj = new oldType(inp4, inp5, inp6, inp7, inp8, inp9, false, false, inp11);
				vect1.push_back(*obj);
			}



		}
		if (userinput == 0)
		{

		}



	}
}