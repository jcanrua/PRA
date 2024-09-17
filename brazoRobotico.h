#include <iostream>

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujeto;

	public: 
		BrazoRobotico();
		
		void getX();
		void getY();
		void getZ();
		void getSujeto();
		void coger();
		void soltar();
		void move(double x1, double y1, double z1);
}		
