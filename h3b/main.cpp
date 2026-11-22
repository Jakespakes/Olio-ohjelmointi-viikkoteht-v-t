#include "Dog.h"
#include "Animal.h"
#include <memory>

int main() {
	/*
	* En tiiä kumpaa muistia tässä pitää käyttää niin teen molemmat
	Animal a;
	a.callOut();

	Dog d;
	d.callOut(); 
	*/

	unique_ptr<Animal> a = make_unique<Animal>();
	a->callOut();

	unique_ptr<Dog> d = make_unique<Dog>();
	d->callOut();

	return 0;
}