#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog : public Animal {
	public:
		~Dog();
		virtual void callOut();
};

#endif