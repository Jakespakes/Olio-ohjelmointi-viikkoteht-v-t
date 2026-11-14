#include "Student.h"

void Student::setName(string n) {
	name = n;
}

void Student::setStudentNumber(int s) {
	studentNumber = s;
}

void Student::setAverage(double a) {
	average = a;
}

string Student::getName() const {
	return name;
}

int Student::getStudentNumber() const {
	return studentNumber;
}

double Student::getAverage() const {
	return average;
}