#include "Mobile.h"

Mobile::Mobile() {
	ptrCamera = new Camera();
}

Mobile::Mobile(Camera *ptrCamera) {
	this->ptrCamera = ptrCamera;
}

Mobile::~Mobile() {
	delete ptrCamera;
}

bool Mobile::powerOn() {
	cout << "Mobile powerOn invoked ..." << endl;

	if ( ptrCamera->ON() ) 
		return true;

	cout << "Mobile powerOn failed logic ..." << endl;

	return false;
}
