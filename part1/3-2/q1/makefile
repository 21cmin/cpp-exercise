Calculator.o: Calculator.h Calculator.cpp
	g++ -c Calculator.cpp
main.o: Calculator.h main.cpp
	g++ -c main.cpp
main: Calculator.o main.o
	g++ Calculator.o main.o -o main