#include <gtest/gtest.h>
#include "RPNCalculator.h"

TEST ( RPNCalculatorTestSuite, TestSimpleAddition  ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "85 15 +" );
	double expectedResult = 100.0;
	EXPECT_EQ ( expectedResult, actualResult );

	actualResult = rpnCalculator.evaluate ( "25 15 +" );
	expectedResult = 40.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTestSuite, TestSimpleSubtraction ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "50 20 -" );
	double expectedResult = 30.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTestSuite, TestSimpleMultiplication ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "50 20 *" );
	double expectedResult = 1000.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTestSuite, TestSimpleDivision ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "50 10 /" );
	double expectedResult = 5.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTestSuite, TestComplexRPNExpression ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "100 5 / 200 2 * +" );
	double expectedResult = 420.0;
	EXPECT_EQ ( expectedResult, actualResult );

}
