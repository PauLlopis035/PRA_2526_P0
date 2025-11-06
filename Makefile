all: brazoRobotico

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

brazoRobotico: BrazoRobotico.o main.o
	g++ -o brazoRobotico BrazoRobotico.o main.o


test: all
	./brazoRobotico

