#include "Robot.h"

bool Robot::findExit(Maze& maze) const {
    if (maze.getPosition(row, column) == 'E') return true;
    return false;
}