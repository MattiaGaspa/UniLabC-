#include <iostream>
#include "RightHandRuleRobot.h"

// Direction:
//   1
// 2 R 3
//   4
void RightHandRuleRobot::move(Maze& maze) {
	/*int nrow = newRow(3);
	int ncolumn = newColumn(3);
	
	// No wall on the right!
	if (maze.getPosition(nrow, ncolumn) == ' ') {
		row = nrow;
		column = ncolumn;
	}
	// Wall on the right!
	else {
		if (foundRightWall == false) foundRightWall = true;
		// Wall on the right -> up!
		if (maze.getPosition(newRow(1), newColumn(1)) == ' ') {
			row = newRow(1);
			column = newColumn(1);
		}
		// Wall above!
		else {
			// Wall on the right and above -> left
			if (maze.getPosition(newRow(2), newColumn(2)) == ' ') {
				row = newRow(2);
				column = newColumn(2);
			}
		}
	}*/
}