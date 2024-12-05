#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include "Maze.h"

class Robot {
protected:
	int row;
	int column;
	
	int newRow(char direction) const {
		if ((direction == 1) && (row > 0)) return row - 1;
		if ((direction == 4) && (row < 9)) return row + 1;
		return row;
	}
	int newColumn(char direction) const {
		if ((direction == 2) && (column > 0)) return column - 1;
		if ((direction == 4) && (column < 9)) return column + 1;
		return column;
	}

public:
	// Direction:
	//   1
	// 2 R 3
	//   4
	virtual void move(Maze& maze) = 0;
};

#endif