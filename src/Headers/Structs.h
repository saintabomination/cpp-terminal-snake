#ifndef STRUCTS_H
#define STRUCTS_H

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
