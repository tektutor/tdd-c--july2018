#include "CarFactory.h"

Car* CarFactory::getCar ( string typeOfCar ) {

	Car *ptrCar = NULL;

	if ( "Maruti" == typeOfCar ) 
		ptrCar = new Maruti();
	else if ( "BMW" == typeOfCar )
		ptrCar = new BMW();
	else if ( "Audi" == typeOfCar )
		ptrCar = new Audi();
	else
		ptrCar = new NullCar;

	return ptrCar;
}
