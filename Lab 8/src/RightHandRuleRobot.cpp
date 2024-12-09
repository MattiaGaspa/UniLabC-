#include <iostream>
#include "RightHandRuleRobot.h"

RightHandRuleRobot::RightHandRuleRobot(Maze& maze) {
	for (int i = 0; i < maze.getRows(); i++) {
		for (int j = 0; j < maze.getColumns(); j++) {
			if (maze.getPosition(i, j) == 'R') {
				row = i;
				column = j;
			}
		}
	}
}

// Direction:
//   1
// 2 R 3
//   4
void RightHandRuleRobot::move(Maze& maze) {
    int nrow, ncolumn;

	if (foundRightWall == false) {
        nrow = newRow(3);
        ncolumn = newColumn(3);
		if (maze.getPosition(nrow, ncolumn) == '*') {
		    foundRightWall = true;
		}
		else {
			row = nrow;
			column = ncolumn;
			if (maze.getPosition(newRow(4), newColumn(4)) != '*') {
                foundDownWall = false;
            }
		}
    }
    if (foundRightWall == true && foundUpWall == false) {
        nrow = newRow(1);
        ncolumn = newColumn(1);
		if (maze.getPosition(nrow, ncolumn) == '*') {
		    foundUpWall = true;
		}
		else {
			row = nrow;
			column = ncolumn;
			if (maze.getPosition(newRow(3), newColumn(3)) != '*') {
                foundRightWall = false;
            }
		}
    }
    if (foundRightWall == true && foundUpWall == true && foundLeftWall == false) {
        nrow = newRow(2);
        ncolumn = newColumn(2);
		if (maze.getPosition(nrow, ncolumn) == '*') {
            foundLeftWall = true;
		}
		else {
			row = nrow;
			column = ncolumn;
			if (maze.getPosition(newRow(1), newColumn(1)) != '*') {
                foundUpWall = false;
            }
		}
    }
    if (foundRightWall == true && foundUpWall == true && foundLeftWall == true && foundDownWall == false) {
        nrow = newRow(4);
        ncolumn = newColumn(4);
		if (maze.getPosition(nrow, ncolumn) == '*') {
            foundDownWall = true;
		}
		else {
			row = nrow;
			column = ncolumn;
			if (maze.getPosition(newRow(2), newColumn(2)) != '*') {
                foundLeftWall = false;
            }
		}
    }
}