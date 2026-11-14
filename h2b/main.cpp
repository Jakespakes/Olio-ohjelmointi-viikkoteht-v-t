#include "Car.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<Car> carList;
	carList.emplace_back("Toyota", "Prius", 2012);
	carList.emplace_back("Volkswagen", "Golf", 2006);
	carList.emplace_back("Ford", "Focus", 2023);

	carList[1].printData();

	for (int i = 0; i < 3; i++) {
		carList[i].printData();
	}

	return 0;
}