#ifndef RIGHTHANDRULEROBOT_H
#define RIGHTHANDRULEROBOT_H

#include <iostream>
#include "Maze.h"
#include "Robot.h"

class RightHandRuleRobot : public Robot {
	bool foundRightWall{false};
	bool foundLeftWall{false};
	bool foundUpWall{false};
	bool foundDownWall{false};
public:
  	RightHandRuleRobot(Maze& maze);
	void move(Maze& maze);
};

#endif