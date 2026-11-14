#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

void Car::printData() const {
	cout << brand << ", " << model << ", " << yearModel << endl;
}

void Car::setBrand(string b) {
	brand = b;
}

void Car::setModel(string m) {
	model = m;
}

void Car::setYearModel(int y) {
	yearModel = y;
}