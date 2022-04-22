#include "Headers/Functions.h"

int main()
{
  clearScreen();

  int game[10][10];
  initGame(game);
  drawGame(game);

  return 0;
}
