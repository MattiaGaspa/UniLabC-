#include <iostream>

using namespace std;

constexpr int num = 20;

void print_array_length(double* array) {
	cout << "Dimensione array: " << sizeof(array) << endl;
}

int main(void) {
	double array[num];
	cout << "Dimensione array: " << sizeof(array) << endl;
	print_array_length(array);
	return 0;
}
