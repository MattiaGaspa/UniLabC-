#include <iostream>
#include "MyVector.h"

int main(void) {
	MyVector vettore(10);
	vettore.at(1) = 10;
	cout << vettore.at(1) << endl;
	cout << vettore << endl;
	return 0;
}
