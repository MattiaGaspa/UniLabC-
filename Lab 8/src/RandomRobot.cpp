#include <iostream>
#include "RandomRobot.h"

void RandomRobot::move(Maze& maze) {
    do {
        int direction = rand() % 4 + 1;

        int nrow = newRow(direction);
        int ncolumn = newColumn(direction);

        if (maze.getPosition(nrow, ncolumn) == ' ') {
            row = nrow;
            column = ncolumn;
        }
    } while (maze.getPosition(row, column) == '*');
}