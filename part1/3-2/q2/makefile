printer.o: Printer.h Printer.cpp
	g++ -c Printer.cpp
main.o: Printer.h main.cpp
	g++ -c main.cpp
main: Printer.o main.o
	g++ Printer.o main.o -o main