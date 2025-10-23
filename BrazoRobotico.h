#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujetando;
			
	public:
		BrazoRobotico(double x_int, double y_int, double z_int);
		double getx();
		double gety();
		double getz();
		bool estaSujetando();
		void coger();
		void soltar();
		void mover(double x_dest, double y_dest, double z_dest);
};

#endif
