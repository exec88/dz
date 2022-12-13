#pragma once
#include "Food.h"

class FoodSlot
{
public:
	FoodSlot(short slotSize);
	~FoodSlot();

	short getSize() const;
	short getFoodCount() const;

	void addFood(Food* food);
	void giveFood();

private:
	short _size;
	short _foodCount;
	Food** _foods;
};
