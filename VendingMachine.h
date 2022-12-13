#pragma once
#include "FoodSlot.h"

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize() const;
	int getEmptySlotsCount() const;
	int getFoodsCount() const;

	void addSlot(FoodSlot* slot);
	void giveFood();

private:
	int _size;
	int _slotCount;
	int _emptySlotsCount;
	int _foodsCount;
	Food
