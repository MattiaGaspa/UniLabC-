#include <iostream>
#include "Maze.h"

Maze::Maze(std::vector<std::string> maze) {
	if (maze.size() == columns) {
		for (int i = 0; i < columns; i++) {
			if (maze[i].size() == rows) {
				this->maze = maze;
			}
		}
	}
	throw new IllegalMaze();
}

char Maze::getPosition(int row, int column) const {
	if ((row > rows) && (column > columns)) throw new IllegalPosition();
	return static_cast<char>(maze[row].at(column));
}