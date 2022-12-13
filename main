#include <iostream>
#include "VendingMachine.h"

using namespace std;

int main() 
{
	
setlocale(LC_ALL, "rus");

	Food* sandwich = new Food("Sandwich");
	Food* lays = new Food("Lays");
	FoodSlot* slot = new FoodSlot(3);
	slot->addFood(sandwich);
	slot->addFood(lays);
	VendingMachine* machine = new VendingMachine(2);
	
	machine->addSlot(slot);
	cout << "Количество пустых слотов:" << machine->getEmptySlotsCount() << endl;
	cout << "Количество товаров в аппарате:" << machine->getFoodsCount() << endl;

	machine->giveFood();
	cout << "Количество товаров в аппарате:" << machine->getFoodsCount() << endl;
	cout << "Количество пустых слотов:" << machine->getEmptySlotsCount() << endl;

	machine->giveFood();
	cout << "Количество товаров в аппарате:" << machine->getFoodsCount() << endl;
	cout << "Количество пустых слотов:"<< machine->getEmptySlotsCount() << endl;

	delete machine;
	delete slot;
	delete sandwich;
	delete lays;

	return 0;
}
