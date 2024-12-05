#include <iostream>

using namespace std;

void print_reference(const double& var) {
	cout << var << endl;
}

void print_pointer(double* var) {
	cout << *var << endl;
}
void print_pointer(int* var) {
	cout << *var << endl;
}

int main(void) {
	int var1 = 10;
	double var2= 19.9;
	
	print_reference(var1);
	print_pointer(&var1);
	
	print_reference(var2);
	print_pointer(&var2);
	
	return 0;
}
