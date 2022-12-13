#include <iostream>
#include "VendingMachine.h"

using namespace std;

VendingMachine::VendingMachine(int size)
{
	_size = size;
	_slotCount = 0;
	_emptySlotsCount = _size;
	_foodsCount = 0;
	slots = new FoodSlot*[size];
}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize() const
{
	return _size;
}

int VendingMachine::getEmptySlotsCount() const
{
	return _emptySlotsCount;
}

int VendingMachine::getFoodsCount() const
{
	return _foodsCount;
}

void VendingMachine::addSlot(FoodSlot* slot)
{
	slots[_slotCount] = slot;
	--_emptySlotsCount;
	++_slotCount;
	_foodsCount += slot->getFoodCount();
}

void VendingMachine::giveFood()
{
	--_foodsCount;
	slots[_slotCount - 1]->giveFood();
	if (slots[_slotCount - 1]->getFoodCount() == 0)
	{
		++_emptySlotsCount;
	}
}
