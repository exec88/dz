#pragma once
#include <iostream>

class Food
{
public:
	Food(const std::string& name);
	Food(const std::string& name, double priceValue);
	Food(const std::string& name, double priceValue, int energyValue);
	
	~Food() = default;

	void setName(const std::string& name);
	void setPrice(double value);
	void setEnergy(int value);

	std::string getName() const;
	double getPrice() const;
	int getEnergy() const;

private:
	std::string _name;
	double _price;
	int _energy;
};
