#ifndef WHEEL_H
#define WHEEL_H
#include <string>
using namespace std;

class Wheel {
	public:
		Wheel();
		Wheel(int, string);
		int getSize();
		void setSize(int);
		string getType();
		void setType(string);
	private:
		int size;
		string type;
};

#endif