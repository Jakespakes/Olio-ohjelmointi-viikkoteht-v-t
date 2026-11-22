#include "Animal.h"

Animal::~Animal() {
	cout << "Eläin destruktori" << endl;
}

void Animal::callOut() {
	cout << "Eläin ääntelee" << endl;
}