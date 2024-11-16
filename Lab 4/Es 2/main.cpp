#include <iostream>
#include "MyVector.h"

int main(void) {
	MyVector vettore{1, 1, 2, 3, 5, 6};
	cout << "Vettore di size: " << vettore.size() << " capacity: " << vettore.capacity() << endl;
	cout << vettore << endl;
	for (int i = 0; i < vettore.size(); i++) {
		vettore[i] = i;
	}
	cout << vettore << endl;
	vettore.at(1) = 10;
	cout << vettore << endl;
	vettore.push_back();
	cout << "Vettore di size: " << vettore.size() << " capacity: " << vettore.capacity() << endl;
	vettore.reserve(10000);
	cout << "Vettore di size: " << vettore.size() << " capacity: " << vettore.capacity() << endl;
	cout << vettore << endl;
	return 0;
}
