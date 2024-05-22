#pragma once

#include "./Point.hpp"

class Triangle {

public:
  Triangle(const Point& A, Point& B, Point& C);
  ~Triangle();
  Triangle (Triangle &old_triangle);
  Triangle &operator=(Triangle &old_triangle);
  Point GetA();
  Point GetB();
  Point GetC();

private:
  Point A;
  Point B;
  Point C;
};