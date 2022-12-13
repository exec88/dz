#include <iostream>
#include "FoodSLot.h"

using namespace std;

FoodSlot::FoodSlot(short size)
{	
	_size = size;
	_foodCount = 0;
	_foods = new Food * [_size];
}

FoodSlot::~FoodSlot()
{
	delete[] _foods;
}

short FoodSlot::getSize() const
{
	return _size;
}

short FoodSlot::getFoodCount() const
{
	return _foodCount;
}

void FoodSlot::addFood(Food* food)
{
	if (_foodCount < _size)
	{
		_foods[_foodCount] = food;
		++_foodCount;
		cout << "В слот добавлен товар: " << food->getName() << endl;
	}
}

void FoodSlot::giveFood()
{
	if (_foodCount > 0)
	{
		--_foodCount;
		cout << "Выдан товар: " << _foods[_foodCount]->getName() << endl;
	}
}
