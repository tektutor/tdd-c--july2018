#include "RPNCalculator.h"

void RPNCalculator::retrieveOperands() {
	secondNumber = numberStack.top();
	numberStack.pop();
		
	firstNumber = numberStack.top();
	numberStack.pop();
}

bool RPNCalculator::isMathOperator ( string token ) {
	string mathOperators = "+-*/";
	int pos = mathOperators.find ( token );
	return ( pos != string::npos );
}

double RPNCalculator::evaluate ( string rpnMathExpression ) {

	double number;
	vector<string> tokens;

	stringstream rpnTokens( rpnMathExpression );
	string token;

	while ( getline ( rpnTokens, token, ' ' ) )
		tokens.push_back (token );

	vector<string>::iterator pos = tokens.begin();

	MathOperation *ptrMathOperation = NULL;

	while ( pos != tokens.end() ) {

		if ( isMathOperator ( *pos ) ) {
			retrieveOperands();
			ptrMathOperation = MathFactory::getMathObject ( *pos );			
			result = ptrMathOperation->evaluate ( firstNumber, secondNumber );
			numberStack.push ( result );
		}
		else {
			number = stod ( *pos );
			numberStack.push ( number );
		}

		++pos;

	}

	result = numberStack.top();
	numberStack.pop();

	return result;
}
