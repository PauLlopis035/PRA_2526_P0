#include 'BrazoRobotico.h'
#include <iostream>
#include <string>
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z){
	x = x;
	y = y;
	z = z;
}
BrazoRobotico::getx(){
	return x;
}
BrazoRobotico::gety(){
	return y;
}
BrazoRobotico::getz(){
	return z;
}
BrazoRobotico::estaSujetando(){
	return sujetando;
}
BrazoRobotico::coger(){
	sujetando=true;
}
BrazoRobotico::soltar(){
	sujetando=false;
}
BrazoRobotico::mover(double x, double y,double z){
	x = x;
	y = y;
	z = z;
}
