#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main(void) {
	vector<int> var = vector<int>(10);
	unique_ptr<vector<int>> var1 = make_unique<vector<int>>(var);
	
	for (int i = 0; i < 10; i++) {
		(*var1).at(i) = i;
	}
	for (int i = 0; i < 4; i++) {
		(*var1).push_back(i+10);
	}
	for (int i = 0; i < 14; i++) {
		cout << (*var1).at(i) << endl;
	}
	return 0;
}
