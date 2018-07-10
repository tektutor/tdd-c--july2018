#include "MathFactory.h"

map<string,MathOperation*> MathFactory::mathOperatorMap;

MathOperation* MathFactory::getMathObject ( string mathOperator ) {

	mathOperatorMap["+"] = new Addition();
	mathOperatorMap["-"] = new Subtraction();
	mathOperatorMap["*"] = new Multiplication();
	mathOperatorMap["/"] =  new Division();

	return mathOperatorMap.find ( mathOperator )->second;
}
