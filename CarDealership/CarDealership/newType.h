#pragma once
#include "carType.h"
class newType :
    public carType
{
private:
    string warranty;

public:
    void setCarWarranty(string w);
    string getCarWarranty();
    void printInfo();

    newType(int v, string m, string d, string c, int y, int p, bool l, bool s, string w);
};

