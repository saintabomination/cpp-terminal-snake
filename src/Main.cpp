#include "Headers.h"
#include "Headers/Structs.h"
#include "Headers/Functions.h"

int main()
{
  clearScreen();

  int game[10][10];
  std::vector<SnakeTile> snakeTiles = {
    SnakeTile(3, 3),
    SnakeTile(4, 3),
    SnakeTile(5, 3)
  };
  Vector2 playerMovement(1, 0);

  initGame(game);
  drawGame(game, snakeTiles);

  return 0;
}
