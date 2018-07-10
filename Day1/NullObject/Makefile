all: Audi.o BMW.o Maruti.o CarFactory.o NullCar.o main.o
	g++ -o demo.exe Audi.o BMW.o Maruti.o CarFactory.o NullCar.o main.o

main.o: main.cpp
	g++ -c main.cpp

NullCar.o: NullCar.cpp
	g++ -c NullCar.cpp

Audi.o: Audi.cpp
	g++ -c Audi.cpp

BMW.o: BMW.cpp
	g++ -c BMW.cpp

Maruti.o: Maruti.cpp
	g++ -c Maruti.cpp

CarFactory.o: CarFactory.cpp
	g++ -c CarFactory.cpp

clean:
	rm -rf *.o *.exe
