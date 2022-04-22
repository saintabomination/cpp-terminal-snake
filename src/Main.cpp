#include "Headers.h"
#include "Constants.h"
#include "Headers/Structs.h"
#include "Headers/Functions.h"

int main()
{
  int game[10][10];
  std::vector<SnakeTile> snakeTiles = {
    SnakeTile(3, 3),
    SnakeTile(4, 3),
    SnakeTile(5, 3)
  };
  Vector2 playerMovement(1, 0);

  initGame(game);

  // Main Loop
  bool isRunning = true;
  while (isRunning)
  {
    clearScreen();
    updateGame(game, snakeTiles, playerMovement);
    drawGame(game, snakeTiles);
    sleep(1.f / GAME_FPS);
  }

  return 0;
}
