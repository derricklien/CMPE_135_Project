#ifndef MAKARONTYPES_H_
#define MAKARONTYPES_H_

#include <iostream>
#include "Makaron.h"
#include "Cookie.h"
#include "Fill.h"

using namespace std;

class MaksMakaron : public Makaron
{
public:
    FillMakaron()
    {
        cookie_type = new Gluten();
        filling_type   = new Fill();
    }

    void identify() { cout << "Filled Makaron" << endl; }
};

class CookieMakaron : public Makaron
{
public:
    CookieMakaron()
    {
        cookie_type = new NoGluten();
        filling_type   = new NoFill();
    }

    void identify() { cout << "Cookie Makaron" << endl; }
};

#endif /* MAKARONTYPES_H_ */
