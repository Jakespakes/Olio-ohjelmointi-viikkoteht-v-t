#include "Rectangle.h"
#include <iostream>
using namespace std;

int Rectangle::getArea() const {
	return width * height;
}

int Rectangle::getCircum() const {
	return (2 * (width * height));
}

void Rectangle::setWidth(double w) {
	width = w;
}

void Rectangle::setHeight(double h) {
	height = h;
}