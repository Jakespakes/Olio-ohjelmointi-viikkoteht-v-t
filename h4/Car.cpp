#include "Car.h"
#include <string>
#include <iostream>

Car::Car() {
	model = "ei modelia";
	brand = "ei brandia";
}

Car::Car(string m, string b) {
	model = m;
	brand = b;
}

void Car::setEngine() {
	objEngine.setHorsePower(150);
	objEngine.setDisplacement(2);
}

void Car::setWheels() {
	objWheel1.setSize(17);
	objWheel1.setType("Kesarengas");

	objWheel2.setSize(17);
	objWheel2.setType("Kesarengas");
	
	objWheel3.setSize(17);
	objWheel3.setType("Kesarengas");
	
	objWheel4.setSize(17);
	objWheel4.setType("Kesarengas");
}

string Car::getModel() {
	return model;
}

void Car::setModel(string m) {
	model = m;
}

string Car::getBrand() {
	return brand;
}

void Car::setBrand(string b) {
	brand = b;
}

void Car::printDetails() {
	cout << "Auto: " << getModel() << " " << getBrand() << endl
		<< "Moottori: " << objEngine.getHorsePower() << " hp, " << objEngine.getDisplacement() << " L" << endl
		<< "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl
		<< "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl
		<< "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl
		<< "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}