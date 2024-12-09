#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	fstream file("./maze.txt", ios::out);
	if (!file) {
		cerr << "Errore nell'apertura del file" << endl;
		return 1;
	}
    string line;
    getline(file, line);
    cout << line << endl;
	file.close();
	return 0;
}