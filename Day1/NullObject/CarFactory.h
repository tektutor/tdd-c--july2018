#include <iostream>
#include <string>
#include "BMW.h"
#include "Audi.h"
#include "Maruti.h"
#include "NullCar.h"
using namespace std;

class CarFactory {
public:
	static Car* getCar( string typeOfCar );
};
