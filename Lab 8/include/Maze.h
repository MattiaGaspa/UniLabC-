#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>

class Maze {
	const int rows{9};
	const int columns{9};
	std::vector<std::string> maze;
	
public:
	Maze(std::vector<std::string> maze);
	char getPosition(int row, int column) const;
	class IllegalMaze {};
	class IllegalPosition {};
};

#endif