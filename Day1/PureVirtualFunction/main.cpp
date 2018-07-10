#include "Derived.h"

int main ( ) {

	Base* pDerived = new Derived;
	pDerived->parentMethod();

	delete pDerived;

	return 0;

}
