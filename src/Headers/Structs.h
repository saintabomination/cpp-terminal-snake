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

  void move(Vector2 vector)
  {
    this->x += vector.x;
    this->y += vector.y;
  }
  void moveX(int x) { this->x += x; }
  void moveY(int y) { this->y += x; }
};

#endif // STRUCTS_H
