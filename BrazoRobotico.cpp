#include "BrazoRobotico.h"
#include <iostream>
#include <string>
using namespace std;

BrazoRobotico::BrazoRobotico(double x_int, double y_int, double z_int){
	x = x_int;
	y = y_int;
	z = z_int;
}
double BrazoRobotico::getx(){
	return x;
}
double BrazoRobotico::gety(){
	return y;
}
double BrazoRobotico::getz(){
	return z;
}
bool BrazoRobotico::estaSujetando(){
	return sujetando;
}
void BrazoRobotico::coger(){
	sujetando=true;
}
void BrazoRobotico::soltar(){
	sujetando=false;
}
void BrazoRobotico::mover(double x_dest, double y_dest,double z_dest){
	x = x_dest;
	y = y_dest;
	z = z_dest;
}
