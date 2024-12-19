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
	return 0;
}
