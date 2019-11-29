#include <iostream>
#include <string>
using namespace std;

class Makaron
{
	public:
		virtual string getDescription();
		{
			description = des;
		}

		virtual double cost() = 0;
		friend CondimentDecorator (const Makaron&);
	private:
			string description;
}

class Vanilla: public Makaron
{
	public:
		string getDescription()
		{
			description = "Vanilla";
			return description;
		}

		double cost()
		{
			return 0.99;
		}
}

class RedVelvet: public Makaron
{
	public:
		string getDescription()
		{
			description = "RedVelvet";
			return description;
		}

		double cost()
		{
			return 0.99;
		}
}

class CookiesAndCream: public Makaron
{
	public:
		string getDescription()
		{
			description = "CookiesAndCream";
			return description;
		}

		double cost()
		{
			return 0.99;
		}
}

class Coffee: public Makaron
{
	public:
		string getDescription()
		{
			description = "Coffee";
			return description;
		}

		double cost()
		{
			return 0.99;
		}
}

class CondimentDecorator: public Makaron
{
	public:
		string getDescription()
		{
			return description;
		}	
}

class Raspberries: public CondimentDecorator
{	
	Makaron makaron;
	public:
		Raspberries(Makaron makaron)
		{
			this.makaron = makaron;
		}

		string getDescription()
		{
			return makaron.description;
		}	

		double cost()
		{
			return makaron.cost() + 0.20;
		}
}

class Strawberries: public CondimentDecorator
{	
	Makaron makaron;
	public:
		Strawberries(Makaron makaron)
		{
			this.makaron = makaron;
		}

		string getDescription()
		{
			return makaron.description;
		}	

		double cost()
		{
			return makaron.cost() + 0.20;
		}
}

class ChocolateChips: public CondimentDecorator
{	
	Makaron makaron;
	public:
		ChocolateChips(Makaron makaron)
		{
			this.makaron = makaron;
		}

		string getDescription()
		{
			return makaron.description;
		}	

		double cost()
		{
			return makaron.cost() + 0.20;
		}
}

class Sprinkles: public CondimentDecorator
{	
	Makaron makaron;
	public:
		Sprinkles(Makaron makaron)
		{
			this.makaron = makaron;
		}

		string getDescription()
		{
			return makaron.description;
		}	

		double cost()
		{
			return makaron.cost() + 0.20;
		}
}