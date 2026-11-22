#ifndef ENGINE_H
#define ENGINE_H

class Engine {
	public: 
		Engine();
		Engine(int, double);
		int getHorsePower();
		void setHorsePower(int);
		int getDisplacement();
		void setDisplacement(int);
	private:
		int horsepower;
		double displacement;
};

#endif