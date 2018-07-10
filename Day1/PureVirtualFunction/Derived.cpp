#include "Derived.h"

void Derived::parentMethod() {
	Base::parentMethod(); // This is optional code reuse
	cout << "Derived::parentMethod ..." << endl;
}
