#ifndef __RPNCALCULATOR__H
#define __RPNCALCULATOR__H

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

#include "MathOperation.h"
#include "MathFactory.h"

class RPNCalculator {
private:
	double result, firstNumber, secondNumber;
	stack<double> numberStack;
	void retrieveOperands(); 
	bool isMathOperator ( string token );
public:
	double evaluate ( string );

};

#endif /* __RPNCALCULATOR__H  */
