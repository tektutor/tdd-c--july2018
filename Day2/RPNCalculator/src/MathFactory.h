#ifndef __MATHFACTORY__H
#define __MATHFACTORY__H

#include <string>
#include <map>
using namespace std;

#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

#include "MathOperation.h"

class MathFactory {
private:
	static map<string, MathOperation*> mathOperatorMap;
public:
	static MathOperation* getMathObject ( string mathOperation );
};

#endif /*__MATHFACTORY__H */
