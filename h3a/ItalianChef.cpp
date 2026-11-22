#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(string n) : Chef(n) {
	name = n;
	cout << "IalianChef " << name << " konstruktori" << endl;
}

string ItalianChef::getName() {
	return name;
}

void ItalianChef::makePasta() {
	cout << "ItalianChef " << name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef() {
	cout << "ItalianChef destruktori " << name << endl;
}