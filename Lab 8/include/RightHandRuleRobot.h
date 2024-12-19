// L'implementazione richiesta sarebbe stata più corretta utilizzando una variabile direction che rappresenta la direzione in cui il robot si muoverebbe (ad esempio: 1 va verso nord, 2 va est, ecc...).
// In questo codice invece si è pensato al robot con ruote omnidirezionali e sensori di prossimità in tutti e quattro i lati

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