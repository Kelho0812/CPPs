#include "./Point.hpp"

class Triangle {

public:
  Triangle(Point A, Point B, Point C);
  ~Triangle();
  Triangle (Triangle &old_triangle);
  Triangle &operator=(Triangle &old_triangle);

private:
  Point A;
  Point B;
  Point C;
};