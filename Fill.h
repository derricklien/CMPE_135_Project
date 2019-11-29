#ifndef FILL_H_
#define FILL_H_

#include <iostream>
#include "FillType.h"

using namespace std;

class Fill : public FillingType
{
public:
    void Fill() { cout << "  Filled!" << endl; }
};

class NoFill : public FillingType
{
public:
    void NoFill() { cout << "  No filling!" << endl; }
};

#endif /* FLY_H_ */
