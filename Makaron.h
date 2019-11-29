#ifndef MAKARON_H_
#define MAKARON_H_

#include "CookieType.h"
#include "FillingType.h"

class Makaron
{
public:
    virtual ~Makaron() {}

    void perform_cookie() { cookie_type->cookie(); }
    void perform_filling()   { filling_type->filling(); }

    virtual void identify() = 0;

protected:
    CookieType *cookie_type;
    FillingType   *filling_type;
};

#endif /* MAKARO_H_ */
