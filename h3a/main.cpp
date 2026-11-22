#include "chef.h"
#include "ItalianChef.h"
#include <iostream>
using namespace std;

int main() {
	Chef c("Gordon Ramsay");
	c.makeSalad();
	c.makeSoup();

	ItalianChef ic("Anthony Bourdain");
	ic.makeSalad();
	ic.makeSoup();
	ic.makePasta();
	cout << "name of the Italian Chef is " << ic.getName() << endl;

	return 0;
}