#include "Derived.h"

int main ( ) {

	Derived *pDerived = new Derived;
	pDerived->parentMethod();

	delete pDerived;

	return 0;

}
