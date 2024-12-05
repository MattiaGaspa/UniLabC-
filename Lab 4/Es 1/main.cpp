#include <iostream>
#include "MyVector.h"

int main(void) {
	MyVector vettore(10);
	vettore.safe_set(1, 10);
	cout << vettore.safe_get(1) << endl;
	cout << vettore << endl;
	return 0;
}
