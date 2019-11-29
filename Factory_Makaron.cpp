#include <iostream>
#include <string>
using namespace std;

class Makaron
{
  public:
    virtual void create_Makaron() = 0;
};

class FrenchCoffeeMacaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "French Coffee Macaron created!\n";
    }
};
class ItalianRedVelvetMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "Italian Red Velvet Makaron created!\n";
    }
};
class FrenchVanillaMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "French Vanilla Makaron created!\n";
    }
};
class FrenchRedVelvetMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "French Red Velvet Makaron created!\n";
    }
};
class ItalianVanillaMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "Italian Vanilla Makaron created!\n";
    }
};
class FrenchCookiesNCreamMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "French Cookies and Cream Makaron created!\n";
    }
};
class ItalianCoffeeMacaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "Italian Coffee Macaron created!\n";
    }
};
class ItalianCookiesNCreamMakaron: public Makaron
{
  public:
    void create_Makaron()
    {
        cout << "Italian Cookies and Cream Makaron created!\n";
    }
};