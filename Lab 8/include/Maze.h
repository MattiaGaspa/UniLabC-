#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>

class Maze {
	const int rows{9};
	const int columns{9};
	std::vector<std::string> maze;
	
public:
	Maze() = default;
	void add_row(std::string row);

	char getPosition(int row, int column) const;
    std::string toString() const;
	std::string toFormattedString() const;

    int getRows() const { return rows; }
    int getColumns() const { return columns; }

    class IllegalMaze {};
	class IllegalPosition {};
};

#endif