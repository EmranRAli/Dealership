#pragma once
#include "carType.h"
class oldType :
    public carType
{
private:
    int mileage;

public:
    void setCarMileage(int g);
    int getCarmileage();
    void printInfo();
    oldType(int v, string m, string d, string c, int y, int p, bool l, bool s, int g);
};

