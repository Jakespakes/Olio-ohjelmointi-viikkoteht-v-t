#include "Car.h"

int main() {
	Car c("Toyota", "Corolla");
	c.setEngine();
	c.setWheels();
	c.printDetails();

	return 0;
}