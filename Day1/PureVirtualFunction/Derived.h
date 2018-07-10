#ifndef __DERIVED__H
#define __DERIVED__H

#include "Base.h"

class Derived : public Base {
public:
	virtual void parentMethod();
};

#endif /* __DERIVED__H */
