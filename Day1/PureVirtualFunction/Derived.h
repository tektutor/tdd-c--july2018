#ifndef __DERIVED__H
#define __DERIVED__H

#include "Base.h"

class Derived : public Base {
public:
	void parentMethod();
	virtual ~Derived() { }
};

#endif /* __DERIVED__H */
