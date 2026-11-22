#include "Dog.h"
#include <iostream>
using namespace std;

Dog::~Dog() {
	cout << "Koira destruktori" << endl;
}

void Dog::callOut() {
	cout << "Koira haukkuu!" << endl;
}