#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{
	private:
		double x, y, y;
		bool sujetando;
			
	public:
		BrazoRobotico(double x_int, double y_int, double z_int){
		}
		double getx() const;
		double gety() const;
		double getz() const;
		bool estaSujetando() const;
		void coger();
		void soltar();
		void mover(double x_dest, double y_dest, double z_dest);
};

#endif
