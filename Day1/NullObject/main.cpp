#include "CarFactory.h"

int main () {

	Car *ptrCar = CarFactory::getCar ("");
	ptrCar->drive();

	return 0;
}
