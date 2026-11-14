#include "Car.h"
#include "Rectangle.h"
#include "Student.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
	
	// Car-luokka

	Car c;
	c.setBrand("Toyota");
	c.setModel("Corolla");
	c.setYearModel(2012);
	c.printData();

	// Rectangle-luokka

	Rectangle *r = new Rectangle();

	r->setHeight(15);
	r->setWidth(10);
	cout << "Ymparysmitta: " << r->getArea() << endl 
		<< "Pinta-ala: " << r->getCircum() << endl;
	
	delete r;
	r = nullptr;

	// Student-luokka

	unique_ptr<Student> s = make_unique<Student>();
	s->setName("Jukka");
	s->setStudentNumber(12);
	s->setAverage(4.3);
	cout << "Opiskelijan nimi: " << s->getName() << endl
		<< "Opiskelijanumero: " << s->getStudentNumber() << endl
		<< "Keskiarvo: " << s->getAverage() << endl;

	return 0;
}