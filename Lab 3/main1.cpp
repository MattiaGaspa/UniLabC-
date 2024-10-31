#include <iostream>

using namespace std;

void f() {
	int array[10];
	
	int* ptr = &array[5];
	
	for (int i = -4; i < 5; i++) {
		ptr[i] = i * i;
	}
}

void f_illegal() {
	int array[10];
	
	int* ptr = &array[5];
	
	for (int i = 0; i < 10; i++) {
		ptr[i] = i * i;
	}
}

int main(void) {
	f();
	f_illegal();
	return 0;
}
