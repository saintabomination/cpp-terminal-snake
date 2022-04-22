#include <stdlib.h>
#include <iostream>

void clearScreen()
{
  system("clear");
}

void initGame(int (&game)[10][10])
{
  for (int y = 0; y < 10; y++)
  {
    for (int x = 0; x < 10; x++)
    {
      // Creating the walls
      game[y][x] = (
        x == 0 || y == 0 ||
        x == 9 || y == 9
      ) ? 1 : 0;
    }
  }
}

void drawGame(int game[10][10])
{
  for (int y = 0; y < 10; y++)
  {
    for (int x = 0; x < 10; x++)
    {
      switch (game[y][x])
      {
        case 1:
          std::cout << '#';
          break;

        default:
          std::cout << ' ';
          break;
      }
      std::cout << ' ';
    }
    std::cout << '\n';
  }
}

int main()
{
  clearScreen();

  int game[10][10];
  initGame(game);
  drawGame(game);

  return 0;
}
