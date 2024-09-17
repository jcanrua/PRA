#include <iostream>

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujeto;

	public: 
		BrazoRobotico();
		
		void getX(){
			std::cout << x;
		}

		void getY(){
			std::cout << y;
		}
		
		void getZ(){
			std::cout << z;
		}

		void getSujeto(){
			std::cout << sujeto;
		}
		
		void coger(){
			sujeto=true;
		}
				
		void soltar(){
			sujeto=false;
		}
		
		void move(double x1, double y1, double z1){
			std::cout << "Mover x: ";
			std::cin >> x1;
			std::cout << std::endl;
			x = x1;

			std::cout << "Mover y: ";
			std::cin >> y1;	
			std::cout << std::endl;
			y = y1;

			std::cout << "Mover z: ";
			std::cin >> z1;
			std::cout << std::endl;
			z = z1;
		}
}		
