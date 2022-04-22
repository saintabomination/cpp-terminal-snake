#ifndef STRUCTS_H
#define STRUCTS_H

struct Vector2 {
  int x;
  int y;

  Vector2(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  void setX(int x) { this->x = x; }
  void setY(int y) { this->y = y; }
};

struct SnakeTile {
  unsigned int x;
  unsigned int y;

  SnakeTile(unsigned int x, unsigned int y)
  {
    this->x = x;
    this->y = y;
  }
};

#endif // STRUCTS_H
