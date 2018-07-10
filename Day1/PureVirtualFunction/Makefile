all: Base.o Derived.o main.o
	g++ -o demo.exe Base.o Derived.o main.o

Base.o: Base.cpp
	g++ -c Base.cpp

Derived.o: Derived.cpp
	g++ -c Derived.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.exe *.o
