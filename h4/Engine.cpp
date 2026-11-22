#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine() {
	horsepower = 0;
	displacement = 0;
}

Engine::Engine(int h, double d) {
	horsepower = h;
	displacement = d;
}

int Engine::getHorsePower() {
	return horsepower;
}

void Engine::setHorsePower(int h) {
	horsepower = h;
}

int Engine::getDisplacement() {
	return displacement;
}
 
void Engine::setDisplacement(int d) {
	displacement = d;
}