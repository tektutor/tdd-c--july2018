SRC_INC=-I src
TEST_INC=-I googletest/googletest/include \
         -I googletest/googletest/src  \
	 -I googletest/googlemock/include \
         -I googletest/googlemock/src \
	 -I googletest/googletest \
	 -I googletest/googlemock

all: bin/RPNCalculator.o bin/main.o bin/MathFactory.o bin/Addition.o bin/Subtraction.o bin/Multiplication.o bin/Division.o
	g++ -o bin/app.exe bin/RPNCalculator.o bin/main.o bin/Addition.o bin/Subtraction.o bin/Multiplication.o bin/Division.o bin/MathFactory.o

bin/RPNCalculator.o: src/RPNCalculator.cpp
	g++ -c -o bin/RPNCalculator.o src/RPNCalculator.cpp $(SRC_INC) -std=c++17

bin/MathFactory.o: src/MathFactory.cpp
	g++ -c -o bin/MathFactory.o src/MathFactory.cpp $(SRC_INC) -std=c++17

bin/Addition.o: src/Addition.cpp
	g++ -c -o bin/Addition.o src/Addition.cpp $(SRC_INC) -std=c++17

bin/Subtraction.o: src/Subtraction.cpp
	g++ -c -o bin/Subtraction.o src/Subtraction.cpp $(SRC_INC) -std=c++17

bin/Multiplication.o: src/Multiplication.cpp
	g++ -c -o bin/Multiplication.o src/Multiplication.cpp $(SRC_INC) -std=c++17

bin/Division.o: src/Division.cpp
	g++ -c -o bin/Division.o src/Division.cpp $(SRC_INC) -std=c++17

bin/main.o: src/main.cpp
	g++ -c -o bin/main.o src/main.cpp $(SRC_INC) -std=c++17

test: bin/RPNCalculator.o bin/Addition.o bin/Subtraction.o bin/Multiplication.o bin/Division.o bin/MathFactory.o bin/RPNCalculatorTest.o bin/libgtest.a
	g++ -o bin/testApp.exe bin/RPNCalculator.o bin/RPNCalculatorTest.o bin/Addition.o bin/Subtraction.o bin/Multiplication.o bin/Division.o bin/MathFactory.o bin/libgtest.a -lpthread
	bin/testApp.exe

bin/RPNCalculatorTest.o: test/RPNCalculatorTest.cpp
	g++ -c -o bin/RPNCalculatorTest.o test/RPNCalculatorTest.cpp $(SRC_INC) $(TEST_INC) -std=c++17

bin/libgtest.a: bin/gtest-all.o bin/gmock-all.o bin/gmock_main.o 
	ar crf bin/libgtest.a bin/gtest-all.o bin/gmock-all.o bin/gmock_main.o

bin/gtest-all.o: googletest/googletest/src/gtest-all.cc
	g++ -c -o bin/gtest-all.o googletest/googletest/src/gtest-all.cc $(SRC_INC) $(TEST_INC) -std=c++17

bin/gmock-all.o: googletest/googlemock/src/gmock-all.cc
	g++ -c -o bin/gmock-all.o googletest/googlemock/src/gmock-all.cc $(SRC_INC) $(TEST_INC) -std=c++17

bin/gmock_main.o: googletest/googlemock/src/gmock_main.cc
	g++ -c -o bin/gmock_main.o googletest/googlemock/src/gmock_main.cc $(SRC_INC) $(TEST_INC) -std=c++17

clean:
	rm -rf bin/*.exe bin/*.o bin/*.a
