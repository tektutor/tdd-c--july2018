#ifndef __MOBILE__H
#define __MOBILE__H

#include <iostream>
using namespace std;

#include "Camera.h"

class Mobile {
private:
	Camera *ptrCamera;
public:
	Mobile();
	Mobile(Camera *);
	virtual ~Mobile();
	bool powerOn();
};


#endif /* __MOBILE__H */
