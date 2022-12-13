#include <iostream>
#include "Food.h"

using namespace std;

Food::Food(const std::string& name)
{
	_name = name;
	_price = 0;
	_energy = 0;
}

Food::Food(const std::string& name, double priceValue)
{
	_name = name;
	_price = priceValue;
	_energy = 0;
}

Food::Food(const std::string& name, double priceValue, int energyValue)
{
	_name = name;
	_price = priceValue;
	_energy = energyValue;
}

void Food::setName(const std::string& name)
{
	_name = name;
}

void Food::setPrice(double value)
{
	_price = value;
}

void Food::setEnergy(int value)
{
	_energy = value;
}

string Food::getName() const
{
	return _name;
}

double Food::getPrice() const
{
	return _price;
}

int Food::getEnergy() const
{
	return _energy;
}
