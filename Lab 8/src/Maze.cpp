#include <iostream>
#include <fstream>
#include "Maze.h"

void Maze::add_row(std::string row) {
	if (row.size() != columns) throw IllegalMaze();
	maze.push_back(row);
}

std::string Maze::toString() const {
	std::string result;
	for (int i = 0; i < rows; i++) {
		result += maze[i] + "\n";
	}
    result += "\b";
	return result;
}

std::string Maze::toFormattedString() const {
	std::string result;
	for (int i = 0; i < rows; i++) {
		result += std::to_string(i) + " " + maze[i] + "\n";
	}
    result += "  ";
    for (int i = 0; i < columns; i++) {
		result += std::to_string(i);
    }
	return result;
}

char Maze::getPosition(int row, int column) const {
	if ((row > rows) && (column > columns)) throw new IllegalPosition();
	return static_cast<char>(maze[row].at(column));
}