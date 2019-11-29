#ifndef COOKIE_H_
#define COOKIE_H_

#include <iostream>
#include "CookieType.h"

using namespace std;

class Cookie : public CookieType
{
public:
    void gluten() { cout << "  Gluten!" << endl; }
};

class Cookie : public CookieType
{
public:
    void NoGluten() { cout << "  No gluten!" << endl; }
};

class Make : public CookieType
{
public:
    void cookie() { /* silent */ }
};

#endif /* QUACK_H_ */
