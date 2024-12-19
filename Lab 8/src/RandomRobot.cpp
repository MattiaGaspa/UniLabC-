#include <iostream>
#include "RandomRobot.h"

RandomRobot::RandomRobot(Maze& maze) {
    for (int i = 0; i < maze.getRows(); i++) {
        for (int j = 0; j < maze.getColumns(); j++) {
            if (maze.getPosition(i, j) == 'S') {
                row = i;
                column = j;
            }
        }
    }
}

void RandomRobot::move(Maze& maze) {
    do {
        int direction = rand() % 4 + 1;

        int nrow = newRow(direction);
        int ncolumn = newColumn(direction);

        if (maze.getPosition(nrow, ncolumn) != '*') {
            row = nrow;
            column = ncolumn;
        }
    } while (maze.getPosition(row, column) == '*');
}