#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

void Car::printData() const {
	cout << brand << ", " << model << ", " << yearModel << endl;
}

Car::Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}