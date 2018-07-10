#include "RPNCalculator.h"

int main ( ) {

	RPNCalculator rpnCalculator;

	double result = rpnCalculator.evaluate ( "100 10 +" );
	
	cout << "Result of 100 10 + is " << result << endl;

	return 0;
}
