#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "../Headers.h"
#include "Structs.h"

void clearScreen();
void initGame(int (&game)[10][10]);
void drawGame(int game[10][10], std::vector<SnakeTile> snakeTiles);

#endif // FUNCTIONS_H
