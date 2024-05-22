#include "../includes/Triangle.hpp"

Triangle::Triangle(Point A, Point B, Point C) {
  this->A = A;
  this->B = B;
  this->C = C;
}

Triangle::~Triangle() {}

Triangle::Triangle(Triangle &old_triangle) {
  this->A = old_triangle.A;
  this->A = old_triangle.B;
  this->A = old_triangle.C;
}

Triangle &Triangle::operator=(Triangle &old_triangle) {
  this->A = old_triangle.A;
  this->A = old_triangle.B;
  this->A = old_triangle.C;
  return *this;
}
