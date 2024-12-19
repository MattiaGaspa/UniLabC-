#include <iostream>
#include "unique_ptr.h"

using namespace std;

int main(void) {
	unique_ptr<int> test(new int {10});

	cout << *test << endl;
	return 0;
}
