#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

#include <iostream>
#include "Maze.h"
#include "Robot.h"

class RandomRobot : public Robot {
public:
	void move(Maze& maze);
};

#endif