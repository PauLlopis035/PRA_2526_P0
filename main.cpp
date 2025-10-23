#include "BrazoRobotico.h"
#include <iostream>

int main(){

	BrazoRobotico r1(05,05,10);
	std::cout << "Posicion inicial:" << "\n";
	std::cout << r1.getx() << " ";
	std::cout << r1.gety() << " ";
	std::cout << r1.getz() << "\n";
	r1.soltar();
	if(r1.estaSujetando()==1){
		std::cout << "sujetando objeto" << "\n";
	}else{
		std::cout << "sin sujetar objeto" << "\n";
	}
	std::cout << "\n";


	r1.mover(12,14,10);
	std::cout << "Cambio de posicion :" << "\n";
	std::cout << r1.getx() << " ";
	std::cout << r1.gety() << " ";
	std::cout << r1.getz() << "\n";
	r1.coger();
	if(r1.estaSujetando()==1){
		std::cout << "sujetando objeto" << "\n";
	}else{
		std::cout << "sin sujetar objeto" << "\n";
	}
	return 0;
}
