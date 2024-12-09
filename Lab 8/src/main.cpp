#include <iostream>
#include <fstream>
#include "Maze.h"
#include "RightHandRuleRobot.h"
#include "RandomRobot.h"

using namespace std;

int main(void) {
	ifstream MyFile("maze.txt");
    if (!MyFile.is_open()) {
		cout << "Error opening file maze.txt" << endl;
	}
	Maze maze;
    string row;
    while (getline(MyFile, row)) {
		maze.add_row(row);
	}
    cout << "MAZE:" << endl;
    cout << maze.toFormattedString() << endl;

    RightHandRuleRobot robot1(maze);
    /*
    while (robot1.findExit(maze) == false) {
		robot1.move(maze);
        cout << robot1.toString() << endl;
	}*/
	RandomRobot robot2(maze);
	cout << robot2.toString() << endl;
    while (!robot2.findExit(maze)) {
    	robot2.move(maze);
    }
	cout << robot2.toString() << endl;

    MyFile.close();
	return 0;
}