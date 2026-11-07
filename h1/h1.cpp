#include <iostream>
using namespace std;

void calcSum(int a, int b) {
	cout << a + b << endl;
}

void calcDiv(int a, int b) {
	cout << a / b << endl;
}

int retSum(int a, int b) {
	return a + b;
}

int retDiv(int a, int b) {
	if (b == 0) {
		throw runtime_error("jakaja ei saa olla nolla!");
	}
	return a / b;
}

int main() {
	int a, b;
	cout << "Anna eka luku: ";
	cin >> a;

	cout << "Anna toka luku: ";
	cin >> b;

	try {
		int result = retDiv(a, b);
	} catch (runtime_error& e) {
		cout << "Error: " << e.what() << endl;
	}
}