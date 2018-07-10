SRC_INC=-I src
TEST_INC=-I googletest/googletest/include \
         -I googletest/googletest/src  \
	 -I googletest/googlemock/include \
         -I googletest/googlemock/src \
	 -I googletest/googletest \
	 -I googletest/googlemock

all: bin/Mobile.o bin/Camera.o bin/main.o
	g++ -o bin/app.exe bin/Mobile.o bin/main.o bin/Camera.o

bin/Mobile.o: src/Mobile.cpp
	g++ -c -o bin/Mobile.o src/Mobile.cpp $(SRC_INC) -std=c++17

bin/Camera.o: src/Camera.cpp
	g++ -c -o bin/Camera.o src/Camera.cpp $(SRC_INC) -std=c++17

bin/main.o: src/main.cpp
	g++ -c -o bin/main.o src/main.cpp $(SRC_INC) -std=c++17

test: bin/Mobile.o bin/Camera.o bin/MobileTest.o bin/libgtest.a
	g++ -o bin/testApp.exe bin/Mobile.o bin/Camera.o bin/MobileTest.o bin/libgtest.a -lpthread
	bin/testApp.exe

bin/MobileTest.o: test/MobileTest.cpp
	g++ -c -o bin/MobileTest.o test/MobileTest.cpp $(SRC_INC) $(TEST_INC) -std=c++17

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
